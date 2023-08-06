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
    int n;
    cin >> n;
    vector<bool> v;
    v.push_back(1);
    vector<ll> nm(n);
    vector<int> cmp;
    for (int i = 0; i < n; ++i)
    {
        cin >> nm[i];
    }
    bool check = false;
    bool first = true;
    ll temp;
    for (int i = 1; i < n; ++i)
    {
        if (!check)
        {
            if (nm[i - 1] <= nm[i])
            {
                // cout << nm[i] << endl;
                v.push_back(1);
            }
            else
            {
                check = true;
                v.push_back(1);
                temp = nm[i];
            }
        }
        else
        {

            if (nm[i] >= temp && nm[i] <= nm[0])
            {
                v.push_back(1);
                temp = v[i];
            }
            else
                v.push_back(0);
        }
    }
    for (int i = 0; i < v.size(); ++i)
        cout << v[i];
    cout << endl;
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