#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        string template_str;
        int asterisks = 0;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] == b[i]) {
                template_str += a[i];
            } else {
                template_str += "*";
                asterisks++;
            }
        }

        if (asterisks > a.length()) {
            cout << "NO\n";
            continue;
        }

        for (int i = 0; i < template_str.length(); i++) {
            if (template_str[i] == '*') {
                if (asterisks < a.length()) {
                    template_str[i] = a[i];
                    asterisks++;
                } else {
                    template_str[i] = b[i];
                }
            }
        }

        cout << "YES " << template_str << "\n";
    }

    return 0;
}
