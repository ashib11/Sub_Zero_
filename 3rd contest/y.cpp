#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
;
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        vector<pair<int, string>> v(n);
        for (int i = 0; i < n; ++i)
        {
            getline(cin, v[i].second);
            cin >> v[i].first;
            // cin.ignore();
        }
        sort(v.rbegin(), v.rend());
        for (auto p : v)
        {
            cout << p.second << "\n";
        }
    }
    return 0;
}