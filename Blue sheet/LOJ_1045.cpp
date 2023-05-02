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
double pre[1000001];
void pre_cal()
{
    pre[0] = 0;
    for (int i = 1; i <= 10e5; ++i)
    {
        pre[i] = pre[i - 1] + log(i);
    }
}
int main()
{
    fastIO();
    pre_cal(); 
    int test, digit;
    cin >> test;
    for (int i = 1; i <= test; ++i)
    {
        ll n, b;
        cin >> n >> b;
        digit = pre[n] / log(b) + 1;
        cout << "Case " << i << ": " << digit << endl;
    }
    return 0;
}