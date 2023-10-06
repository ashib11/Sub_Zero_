#include <iostream>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        bool check = true;
        string ans = "";
        string aux = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ']')
                check = true;
            else if (s[i] == '[')
            {
                check = false;
                ans = aux + ans;
            }
            else if (check)
                ans += s[i];
            else if (!check)
                aux += s[i];
        }
        ans = aux + ans;
        cout << ans << endl;
    }
    return 0;
}