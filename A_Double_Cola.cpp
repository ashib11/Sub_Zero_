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
    ll n;
    cin >> n;
    vector<string> v = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while (n > 5)
    {
        n = n/2 -2;
    }
    cout << v[n-1] << endl; 
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