#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0, len = s.length();
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            s.erase(i, 2);
            len = s.length();
            i = max(-1, i - 2);
        }
        if (s.size() == 0)
            break;
    }
    if (count % 2 == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}