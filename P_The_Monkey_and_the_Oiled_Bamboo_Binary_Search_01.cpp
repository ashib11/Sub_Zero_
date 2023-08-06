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
    int n;
    cin >> n;
    vector<int> v(n + 2);

    v[0] = 0;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    int l = 0;
    int h = 1e7;
    while (h > l)
    {
        int m = (h + l) / 2;
        int val = m;
        bool check = true;
        for (int i = 1; i <=n; ++i)
        {
            if (v[i] - v[i - 1] > val)
            {
                check = false;
                break;
            }
            else if (v[i] - v[i - 1] == val)
            {
                val--;
            }
        }
        if (check)
            h = m;
        else
            l = m + 1;
    }
    cout << h << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}