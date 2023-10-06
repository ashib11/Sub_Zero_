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

void solve()
{
    int a = 0, b = 0, c = 0, balance = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k; 
        cin >> k;
        if (k == 25)
            a++;
        if (k == 50)
        {
            a--;
            b++;
        }
        if (k == 100)
        {
            if (b != 0)
            {
                b--;
                a--;
            }
            else
                a -= 3;
        }
        if (a < 0 || b < 0)
        {
            cout << "NO";
            return ;
        }
    }
    cout << "YES";
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}