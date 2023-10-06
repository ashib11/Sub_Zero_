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
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
                cnt++;
            }
        }
    cout << "Optimal train swapping takes " ; 
    cout << cnt <<  " swaps." << endl;
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