#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int fink = 0, woodpecker = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                fink++;
            } else {
                woodpecker++;
                fink++;
            }
        }
        cout << fink << " " << n - fink << endl;
    }
    return 0;
}
