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
vector<int> v = {500, 100, 50, 10, 5, 1};
void solve()
{
    int n;
    cin >> n;
    vector<int> ans;

    for (int i = 0; i < v.size(); ++i)
    {

        while (n >= v[i] )
        {
            ans.push_back(v[i]);
            n -= v[i];
        }
    }

    sort(all(ans));
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}
int main()
{
    fastIO();
    int tc;
    tc = 1; 
    while (tc--)
    {
        solve();
    }
    return 0;
}