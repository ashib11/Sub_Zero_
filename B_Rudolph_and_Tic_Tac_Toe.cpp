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
void solve()
{
    vector<string> v(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> v[i];
    }
    if ((v[0][0] == v[0][1] && v[0][0] == v[0][2] && (v[0][0] == 'O' || v[0][0] == '+' || v[0][0] == 'X')))
    {
        cout << v[0][0] << endl;
        return;
    }
    else if ((v[1][0] == v[1][1] && v[1][0] == v[1][2]) && (v[1][0] == 'O' || v[1][0] == '+' || v[1][0] == 'X'))
        {
            cout << v[1][0] << endl;
            return;
        }
    else if ((v[2][0] == v[2][1] && v[2][0] == v[2][2])  && (v[2][0] == 'O' || v[2][0] == '+' || v[2][0] == 'X'))
    {
        cout << v[2][0] << endl;
        return;
    }
    else if ((v[0][0] == v[1][0] && v[0][0] == v[2][0]) && (v[0][0] == 'O' || v[0][0] == '+' || v[0][0] == 'X'))
    {
        cout << v[0][0] << endl;
        return;
    }
    else if ((v[0][1] == v[1][1] && v[0][1] == v[2][1])  && (v[0][1] == 'O' || v[0][1] == '+' || v[0][1] == 'X'))
    {
        cout << v[0][1] << endl;
        return;
    }
    else if ((v[0][2] == v[1][2] && v[0][2] == v[2][2])  && (v[0][2] == 'O' || v[0][2] == '+' || v[0][2] == 'X'))
    {
        cout << v[0][2] << endl;
        return;
    }
    else if ((v[0][0] == v[1][1] && v[0][0] == v[2][2]) && (v[0][0] == 'O' || v[0][0] == '+' || v[0][0] == 'X'))
    {
        cout << v[0][0] << endl;
        return;
    }
    else if ((v[0][2] == v[1][1] && v[0][2] == v[2][0])  && (v[0][2] == 'O' || v[0][2] == '+' || v[0][2] == 'X'))
    {
        cout << v[0][2] << endl;
        return;
    }
    else
    {
        cout << "DRAW" << endl;
        return;
    }
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}