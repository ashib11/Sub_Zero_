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
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }
    sort(v.begin(), v.end());

    if (v[0] < 0)
        cout << v[0] << endl;
    else
        cout << v[n - 1] << endl;
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