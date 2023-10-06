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
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void solve()
{
    int n, k;
    cin >> n >> k;
    string a = s.substr(0, n);
    set<string> s;
    for (int i = 1; i <= k; ++i)
    {
        s.insert(a);
        next_permutation(all(a));
    }
    for (auto it : s)
        cout << it << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ":" << endl;
        solve();
    }
    return 0;
}