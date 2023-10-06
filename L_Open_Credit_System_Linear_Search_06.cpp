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
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int maxDiff = INT_MIN;
    int minVal = v[0];

    for (int i = 1; i < n; ++i)
    {
        maxDiff = max(maxDiff, minVal - v[i]); 
        minVal = max(minVal, v[i]);         
    }
    if (is_sorted(v.begin(), v.end()))
    {
        cout << v[n - 2] - v[n - 1] << endl;
    }
    else
        cout << max((v[0] - v[n - 1]), maxDiff) << endl;
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
