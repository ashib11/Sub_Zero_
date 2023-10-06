#include <iostream>
using namespace std;

int countQAQ(string str, int index)
{
    if (index >= str.size())
        return 0;

    int cnt = 0;

    // Base case: If the current index is the last character in the string
    if (index == str.size() - 1) {
        // If the current character is 'Q', return 0
        // If the current character is 'A', return 0
        // If the current character is 'Q', increment the count by 1
        return (str[index] == 'Q');
    }

    // Recursive case: Check for all possible combinations
    if (str[index] == 'Q') {
        // Check for "QA" followed by the rest of the string
        if (str[index + 1] == 'A')
            cnt += countQAQ(str, index + 2);

        // Check for "QQ" followed by the rest of the string
        cnt += countQAQ(str, index + 1);
    }

    if (str[index] == 'A') {
        // Check for "QAQ" followed by the rest of the string
        if (str[index + 1] == 'Q')
            cnt += countQAQ(str, index + 2);

        // Check for "AA" followed by the rest of the string
        cnt += countQAQ(str, index + 1);
    }

    return cnt;
}

int main()
{
    string a;
    cin >> a;

    int cnt = countQAQ(a, 0);

    cout << cnt << endl;
    return 0;
}
