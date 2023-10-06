#include <iostream>
#include <cstring>

using namespace std;

const int MAX_N = 100005;
bool database[MAX_N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char name[33];
        cin >> name;
        int j = 0;
        while (database[j]) {
            j++;
        }
        if (j == strlen(name)) {
            cout << "OK" << endl;
            database[j] = true;
        } else {
            int k = j;
            while (name[k] != '\0') {
                k++;
            }
            while (database[k]) {
                k++;
            }
            string new_name = name;
            new_name += to_string(j + 1);
            cout << new_name << endl;
            database[k] = true;
        }
    }
    return 0;
}
