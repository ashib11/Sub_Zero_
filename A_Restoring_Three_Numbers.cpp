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
    vector<int> v(4);
    for (int &i : v)
    {
        cin >> i;
    }
    sort(all(v)); 
    cout << v[3]-v[0] << " " << v[3]-v[1] << " " << v[3]-v[2] << endl; 
    
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