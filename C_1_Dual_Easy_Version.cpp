#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<pair<int, int>> operations; // Store the operations (i, j)

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] > arr[i + 1]) {
                int j = i;
                while (j < n - 1 && arr[j] > 0 && arr[j] > arr[j + 1]) {
                    operations.push_back({j + 2, j + 1});
                    arr[j] += arr[j + 1];
                    j++;
                }
            }
        }

        cout << operations.size() << endl;
        for (auto op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}
