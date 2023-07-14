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
    int n, t;
    cin >> n >> t;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }
    int ans = 0;
    int cnt = 0;
    int j = 1;
    for (int i = 1; i <= n; ++i)
    {
        ans += v[i];
        if (ans <= t)
        {
            cnt++;
        }
        else
        {
            ans -= v[j];
            j++;
        }
    }
    cout << cnt << endl;
    return 0;
}