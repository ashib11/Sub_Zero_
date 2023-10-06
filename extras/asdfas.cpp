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
int main()
{
    fastIO();
    int cont = 0, m, n;
    bool flag = true, f = true;
    cin >> m;
    for (int i = 1; i <= 400020; i++)
    {
        n = i;
        while (n % 5 == 0)
        {
            n /= 5;
            cont++;
        }
        if (cont == m)
        {
            if (f)
            {
                cout << "5\n";
                f = false;
            }
            cout << i << " ";
            flag = false;
        }
        if (cont > m)
        {
            break;
        }
    }
    if (flag)
        cout << 0;
    return 0;
}