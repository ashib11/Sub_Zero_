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
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int fun(int s, int e)
{
    if (s == e)
        return 1;
    else if (s > e)

        return 0;

    else
        return fun(s + 1, e) + fun(s + 2, e) + fun(s + 3, e);
}
int main()
{
    fastIO();
    int s, e;
    cin >> s >> e;
    cout << fun(s, e) << endl;
    return 0;
}