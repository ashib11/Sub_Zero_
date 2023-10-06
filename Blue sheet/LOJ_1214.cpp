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
bool check(string &a, ll k)
{
    int i = 0;
    ll rem = 0;
    if (a[0] == '-')
    {
        i = 1;
    }
    for (i; i<a.size() ; ++i)
    {
        rem = ((rem * 10) + a[i] - '0') % k;
    }
    return rem == 0;
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    F(i, 1, t + 1)
    {
        cout << "Case " << i << ": ";
        string a;
        ll b;
        cin >> a >> b; 
        if (check(a, b))
            cout << "divisible" << endl;
        else
            cout << "not divisible" << endl;
    }
    return 0;
}