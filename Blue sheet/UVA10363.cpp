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
    int x = 0, o = 0;
    for (int i = 0; i < 3; ++i)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 3; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {
            if (v[i][j] == 'X')
                x++;
            else if (v[i][j] == 'O')
                o++;
        }
    }
    bool xj = 0, oj = 0;
    if (o > x)
    {
        cout << "no" << endl;
        return;
    }
    if (x >= o)
    {
        if ((v[0][0] == v[0][1] && v[0][0] == v[0][2] && (v[0][0] == 'X')))
        {
            xj = 1;
        }
        if ((v[1][0] == v[1][1] && v[1][0] == v[1][2]) && (v[1][0] == 'X'))
        {
            xj = 1;
        }
        if ((v[2][0] == v[2][1] && v[2][0] == v[2][2]) && (v[2][0] == 'X'))
        {
            xj = 1;
        }
        if ((v[0][0] == v[1][0] && v[0][0] == v[2][0]) && (v[0][0] == 'X'))
        {
            xj = 1;
        }
        if ((v[0][1] == v[1][1] && v[0][1] == v[2][1]) && (v[0][1] == 'X'))
        {
            xj = 1;
        }
        if ((v[0][2] == v[1][2] && v[0][2] == v[2][2]) && (v[0][2] == 'X'))
        {
            xj = 1;
        }
        if ((v[0][0] == v[1][1] && v[0][0] == v[2][2]) && (v[0][0] == 'X'))
        {
            xj = 1;
        }
        if ((v[0][2] == v[1][1] && v[0][2] == v[2][0]) && ((v[0][2] == 'X')))
        {
            xj = 1;
        }
         if ((v[0][0] == v[0][1] && v[0][0] == v[0][2] && (v[0][0] == 'O')))
        {
            // cout << "howx" ;
            oj = 1;
        }
        if ((v[1][0] == v[1][1] && v[1][0] == v[1][2]) && (v[1][0] == 'O'))
        {
            oj = 1;
        }
        if ((v[2][0] == v[2][1] && v[2][0] == v[2][2]) && (v[2][0] == 'O'))
        {
            // cout << "how" << endl;
            oj = 1;
        }
        if ((v[0][0] == v[1][0] && v[0][0] == v[2][0]) && (v[0][0] == 'O'))
        {
            // cout << "s" << endl;
            oj = 1;
        }
        if ((v[0][1] == v[1][1] && v[0][1] == v[2][1]) && (v[0][1] == 'O'))
        {
            oj = 1;
        }
        if ((v[0][2] == v[1][2] && v[0][2] == v[2][2]) && (v[0][2] == 'O'))
        {
            oj = 1;
        }
        if ((v[0][0] == v[1][1] && v[0][0] == v[2][2]) && (v[0][0] == 'O'))
        {
            oj = 1;
        }
        if ((v[0][2] == v[1][1] && v[0][2] == v[2][0]) && ((v[0][2] == 'O')))
        {
            oj = 1;
        }
    }
    
    // cout << v[0][0] << " " << v[1][0] << " "  <<  v[2][0] << endl ;
    // cout << xj << " " << oj << endl;
    // cout << x << " " << o << endl;
    if (!(xj || oj))
    {
        if (x - o <= 1)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
    else if (oj + xj == 2)
        cout << "no" << endl;
    else if (oj && o != x)
        cout << "no" << endl;
    else if (xj && x <= o)
        cout << "no" << endl;
    else if (x - o > 1)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}
int main()
{
    fastIO();

    int tc;

    cin >> tc;
    while ((tc--))
    {
        solve();
        // cout << endl;
    }

    return 0;
}