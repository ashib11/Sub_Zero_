#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < q; ++i) {
            int s, d, k;
            cin >> s >> d >> k;

            long long sum = 0;
            for (int j = 0; j < k; ++j) {
                sum += a[s - 1 + j * d] * (j + 1);
            }

            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}