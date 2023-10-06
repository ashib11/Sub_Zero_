#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
// #define endl "\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) <<
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    cout << fixed << setprecision(4);
    vector<ll> v;
    long long x;

    while (cin >> x)
    {
        //  if(x==1) break; 
        v.push_back(x);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << sqrt(v[i]) << endl;
    }
    return 0;
}