#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int m = 32000;
vector<int> all_prime;
vector<bool> v(m, false);
void seive()
{
    all_prime.push_back(2);
    for (ll i = 4; i < m; i += 2)
        v[i] = true;
    for (ll i = 3; i < m; i += 2)
    {
        if (v[i] == false)
        {
            all_prime.push_back(i);
            for (ll j = (i * i); j < m; j += (i + i))
                v[i] = true;
        }
    }
}
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 || a == 2 || a == 3)
    {
        if (b == 1 || b == 2 || b == 3)
        {
            cout << "-1 " << endl;
            return;
        }
    }
    if ((a % 2 == 0) && (b % 2 == 0))
    {
        cout << a / 2 << " " << a / 2 << endl;
    }
    else if ((b % 2 == 0) || (a % 2 == 0))
    {
        if (b % 2 == 0)
        {
            cout << b / 2 << " " << b / 2 << endl;
            return;
        }
        else if (a % 2 == 0)
        {
            cout << a / 2 << " " << a / 2 << endl;
            return;
        }
    }
    else if (a == b)
    {
        if ((a % 2 != 0) && (b % 2 != 0))
        {
            auto it = find(all(all_prime), a);
            if (it == all_prime.end())
            {
                cout << (a + b) / 4 << " " << (a + b) / 4 << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    else if ((a % 2 != 0) && (b % 2 != 0))
    {
        cout << (a + b) / 4 << " " << (a + b) / 4 << endl;
    }
    else
        cout << "-1x" << endl;
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