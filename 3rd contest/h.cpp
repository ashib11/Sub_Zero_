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
    int n;
    cin >> n;
    map<vector<int>, string> u_m;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        string a;
        cin >> x >> y >> a;
        u_m[{x, y}] = a;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int x, y;
        cin >> x >> y;
        cout << u_m[{x, y}] << endl;
    }
    return 0;
}