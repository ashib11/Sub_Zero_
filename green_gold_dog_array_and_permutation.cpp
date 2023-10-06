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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(all(v));
    reverse(all(v)); 
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        arr[v[i].second] = i + 1;
    }
    for (auto it : arr)
        cout << it << " ";
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