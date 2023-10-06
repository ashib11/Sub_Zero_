#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to build the sparse table for the given array a
vector<vector<int>> buildSparseTable(const vector<int>& a) {
    int n = a.size();
    int logn = log2(n) + 1;
    vector<vector<int>> sparseTable(n, vector<int>(logn));

    // Initialize the sparse table with the original array values
    for (int i = 0; i < n; ++i) {
        sparseTable[i][0] = a[i];
    }

    // Build the sparse table using dynamic programming
    for (int j = 1; j < logn; ++j) {
        for (int i = 0; i + (1 << j) <= n; ++i) {
            sparseTable[i][j] = sparseTable[i][j - 1] & sparseTable[i + (1 << (j - 1))][j - 1];
        }
    }

    return sparseTable;
}

// Function to query the sparse table for the maximum r
int querySparseTable(const vector<vector<int>>& sparseTable, int l, int k) {
    int n = sparseTable.size();
    int logn = log2(n) + 1;

    // Start with the initial range [l, l]
    int r = l;
    int bitwiseAnd = sparseTable[l][0];

    // Use binary search to find the maximum r
    for (int j = logn - 1; j >= 0; --j) {
        if (r + (1 << j) <= n && (bitwiseAnd & sparseTable[r + (1 << j)][j]) >= k) {
            bitwiseAnd &= sparseTable[r + (1 << j)][j];
            r += (1 << j);
        }
    }

    if (bitwiseAnd >= k) {
        return r + 1;  // Adding 1 to convert from 0-based to 1-based indexing
    } else {
        return -1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int q;
        cin >> q;
        vector<vector<int>> sparseTable = buildSparseTable(a);

        while (q--) {
            int l, k;
            cin >> l >> k;
            int result = querySparseTable(sparseTable, l - 1, k); // Convert to 0-based index
            cout << result << " ";
        }
        cout << endl;
    }

    return 0;
}
