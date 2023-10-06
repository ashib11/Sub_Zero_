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
vector<ll> al(21); 
ll fact(ll n)
{
    if (n < 2)
        return 1;
    return  n * fact(n - 1);
}
void solve()
{
    for (int i = 0; i < 21; ++i)
    {
       al[i] =  fact(i);
    }
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    solve();
    // for (auto it : al)
    //     cout << it << endl;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ": ";
        ll n;
        cin >> n;
        vector<ll> ans;
        for (int i = 20; i >= 0; --i)
        {
            if (n - al[i] >= 0)
            {
                n -= al[i];
                ans.push_back(i);
            }
        }
        // cout << "h "  << n << endl;
        if (!n)
        {
            for (int i = ans.size() - 1; i > 0; --i)
                cout << ans[i] << "!+";
            cout << ans[0] << "!" << endl;
        }
        else
            cout << "impossible" << endl;
    }
    return 0;
}