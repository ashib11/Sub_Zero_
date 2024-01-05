#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_operations_to_sorted(string s) {
    int n = s.length();
    vector<int> last_occurrence(26, -1);

    // Find the last occurrence of each character in the string
    for (int i = 0; i < n; ++i) {
        last_occurrence[s[i] - 'a'] = i;
    }

    int operations = 0, prev_pos = n;

    // Traverse the string from right to left
    for (int i = n - 1; i >= 0; --i) {
        // If the current character is greater than the next character, we need to perform an operation
        if (i < prev_pos && s[i] > s[i + 1]) {
            ++operations;
            prev_pos = i;

            // Find the lexicographically largest character to the right of the current position
            int max_char = *max_element(s.begin() + i + 1, s.begin() + prev_pos + 1);
            int max_char_pos = last_occurrence[max_char - 'a'];

            // Update the previous position to the position of the lexicographically largest character
            prev_pos = max_char_pos;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = min_operations_to_sorted(s);

        if (result == 0) {
            cout << "0\n";
        } else if (result == -1) {
            cout << "-1\n";
        } else {
            cout << result << "\n";
        }
    }

    return 0;
}
