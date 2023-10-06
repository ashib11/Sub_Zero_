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
    int n;
    cin >> n;
    int mx = 0, mn = 1e9 + 10;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mx = max(mx, x);
        mn = min(mn, x);
    }
    int c_mx = 0, c_min = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == mx)
            c_mx++;
        else if (v[i] == mn)
            c_min++;
    }
    // cout << c_mx << " " << c_min << endl;
    if (mn == mx)
        cout << mx - mn << " " << n * 1ll * (n - 1) / 2 << endl;
    else
        cout << mx - mn << " " << (c_min * 1ll * c_mx) << endl;
    return 0;
}