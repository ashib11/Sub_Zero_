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
    int q;
    cin >> q;
    map<string, int> m;
    for (int i = 0; i < q; ++i)
    {
        // cout <<"i" <<i << endl;
        int x, y;
        string a;
        cin >> x >> a;
        if (x == 1)
        {
            cin >> y;
            m[a] += y;
        }
        else if (x == 2)
            m.erase(a);
        else if (x == 3)
        {
            auto it = m.find(a);
            if (it != m.end())
                cout << it->second << endl;
            else
                cout << "0" << endl;
        }
    }
    return 0;
}