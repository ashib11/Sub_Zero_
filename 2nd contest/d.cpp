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

void fun(int n, int x = 0)
{

    if (n == 0)
        return;
    fun(n - 1, ++x);
    for (int i = 1; i < x; i++)
        cout << " ";
    for (int i = 0; i < (2 * n - 1); i++)
    {
        cout << "*";
    }
    cout << endl;
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    fun(n, 0);
    return 0;
}