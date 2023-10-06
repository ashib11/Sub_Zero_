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
#define endl "\n"
#define getln(s) geline(cin, s)
#define F(i, a, b) for (int i = a; i < b; i++)
#define B(i, b, a) for (int i = b; i >= a; i--)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    unordered_map<ll, ll> u_m;
    ll n;
    vector<ll> v;
    while (cin >> n)
    {
        // if (n == 0)
        //     break;
        u_m[n]++;
        if (u_m[n] == 1)
            v.push_back(n);
    }
    for (auto it : v)
    {
        cout << it << " " << u_m[it] << endl;
    }
    return 0;
}