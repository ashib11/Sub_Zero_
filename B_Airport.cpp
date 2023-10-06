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
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    vector<int> b;
    for (auto &i : v)
    {
        cin >> i;
        b.push_back(i);
    }
   
    cout << endl;
    ll best = 0, wrost = 0;
    for (int i = 0; i < n; ++i)
    {

        best += *max_element(all(v));
        v[max_element(all(v)) - v.begin()]--;
    }
    for (int i = 0; i < n; ++i)
    {
        if (*min_element(all(b)) > 0)
        {
            // cout << *min_element(all(b)) << endl;
            wrost += *min_element(all(b));
            b[min_element(all(b)) - b.begin()]--;
            if (b[min_element(all(b)) - b.begin()] == 0)
            {
                b[min_element(all(b)) - b.begin()] = 1e5;
            }
        }
    }
    cout << best << " " << wrost << endl;
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}