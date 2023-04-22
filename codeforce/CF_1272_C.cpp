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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> st;
    for (int i = 0; i < k; ++i)
    {
        char c;
        cin >> c;
        st.insert(c);
    }

    long long ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int j = i;
        while (j < n && st.count(s[j]))
            ++j;
        int len = j - i;
        ans += len * 1ll * (len + 1) / 2;
        i = j;
    }
    cout << ans << endl;
    return 0;
}