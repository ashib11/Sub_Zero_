#include <iostream>
#include <vector>
using namespace std;

bool canAchieveMax(const vector<int>& a, int n, int k, int max_val) {
    int op_count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > max_val) {
            max_val = a[i];
        } else {
            int diff = max_val - a[i];
            op_count += diff;
            if (op_count > k) {
                return false;
            }
        }
    }
    return true;
}

int findMaxPossibleMax(const vector<int>& a, int n, int k) {
    int max_val_lower = 1;
    int max_val_upper = *max_element(a.begin(), a.end());
    
    while (max_val_lower <= max_val_upper) {
        int max_val_mid = (max_val_lower + max_val_upper) / 2;
        if (canAchieveMax(a, n, k, max_val_mid)) {
            max_val_lower = max_val_mid + 1;
        } else {
            max_val_upper = max_val_mid - 1;
        }
    }
    
    return max_val_upper;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int result = findMaxPossibleMax(a, n, k);
        cout << result << endl;
    }
    
    return 0;
}
