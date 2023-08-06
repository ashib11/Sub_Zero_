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
    vector<int> v = {4, 44, 444, 7, 77, 777, 47, 74, 477, 744};
    int n;
    cin >> n;
    for (int i = 0; i < v.size(); ++i)
    {
        if (n % v[i] == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl; 
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}