#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s;
        cin >> s;

        int n = 1;
        while (n*n < s) {
            n += 2;
        }

        int x, y;
        if (s > (n-2)*(n-2)) {
            s -= (n-2)*(n-2);
            int k = (s-1) % (n-1);
            if (k <= (n-1)/2) {
                x = n/2 + k;
            } else {
                x = n/2 - (k - (n-1)/2);
            }
            y = n/2 + (s-1)/(n-1) - (n-1)/2;
        } else {
            x = y = n/2;
        }

        cout << x << " " << y << endl;
    }

    return 0;
}
