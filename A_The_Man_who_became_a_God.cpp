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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        int a = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (i)
                v.push_back(abs(x - a));
            a = x;
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int i = 0; i < n - k; ++i)
        {
            ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}