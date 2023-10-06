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
    string a, b;
    cin >> a >> b;
    int count = 1;
    int pos = 0;
    for (int i = 0; i < b.size(); i++)
    {
        if (a[pos] == b[i])
        {
            count++;
            pos++;
        }
    }
    cout << count << endl;
    return 0;
}