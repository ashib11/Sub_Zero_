#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> p;
        p.push_back(a);

        for (int j = n; j > 0; --j) {
            if (j != a && j != b) {
                p.push_back(j);
            }
        }

        p.push_back(b);

        bool valid = true;

        if (p.size() == n) {
            for (int i = 0; i < n / 2; ++i) {
                if (p[i] != a) {
                    valid = false;
                    break;
                }
            }

            for (int i = n / 2; i < n; ++i) {
                if (p[i] != b) {
                    valid = false;
                    break;
                }
            }
        } else {
            valid = false;
        }

        if (valid) {
            for (int i = 0; i < p.size(); ++i) {
                cout << p[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
