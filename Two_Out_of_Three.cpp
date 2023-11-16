#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        map<int, int> count;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            count[a[i]]++;
        }
        
        vector<int> b(n);
        int found = 0;
        
        for (int i = 0; i < n; i++) {
            if (count[a[i]] >= 2) {
                if (found < 2) {
                    b[i] = 1;
                    found++;
                } else {
                    b[i] = 3;
                }
            } else {
                if (found < 2) {
                    b[i] = 1;
                    found++;
                } else {
                    b[i] = 2;
                }
            }
        }
        
        if (found < 2) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
