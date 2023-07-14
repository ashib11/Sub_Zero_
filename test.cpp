#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    string a = "Alice";
    string b = "Bob";
    string c = "Cindy";

    string str;
    cin >> str;

    if (str.size() > 5)
    {
        cout << "SOMETHING'S WRONG" << endl;
        return 0;
    }

    bool alice = true;
    bool bob = true;
    bool cindy = true;

    if (str.size() == 3)
    {
        alice = false;
        cindy = false;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '.')
                continue;
            if (str[i] != b[i])
            {
                bob = false;
                break;
            }
        }
    }
    else if (str.size() == 5)
    {
        bob = false;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '.')
                continue;
            if (str[i] != a[i])
            {
                alice = false;
                break;
            }
        }

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '.')
                continue;
            if (str[i] != c[i])
            {
                cindy = false;
                break;
            }
        }
    }
    else
    {
        cout << "SOMETHING'S WRONG" << endl;
        return 0;
    }

    int x = alice + bob + cindy;

    if (x > 1)
    {
        cout << "CAN'T TELL" << endl;
    }
    else if (x == 1)
    {

        if (alice)
        {
            cout << "Alice" << endl;
        }
        else if (bob)
            cout << "Bob" << endl;
        else if (cindy)
            cout << "Cindy" << endl;
    }
    else
    {
        cout << "SOMETHING'S WRONG" << endl;
    }
    return 0;
}
