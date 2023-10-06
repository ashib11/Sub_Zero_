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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        if (a <= 10)
        {
            v.push_back({b, i + 1});
        }
    }
    sort(v.begin(), v.end()); 
    reverse(v.begin(), v.end()); 
    cout << v[0].second << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}