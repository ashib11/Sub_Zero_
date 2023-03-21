#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        string s;
        cin >> k >> s;

        string fb = ""; // FB-string
        int i = 1; // current integer
        bool found = false; // flag to indicate if s is found

        while (!found) {
            // generate next character of FB-string
            if (i % 3 == 0) {
                fb += 'F';
            }
            if (i % 5 == 0) {
                fb += 'B';
            }

            // check if s is a substring
            if (fb.size() >= s.size()) {
                if (fb.substr(fb.size() - s.size()) == s) {
                    found = true;
                    cout << "YES\n";
                    break;
                }
            }

            // check if remaining FB-string is lexicographically greater than s
            if (fb.size() > s.size() && fb.substr(fb.size() - s.size()) > s) {
                cout << "NO\n";
                break;
            }

            i++;
        }
    }

    return 0;