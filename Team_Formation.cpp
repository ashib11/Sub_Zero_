#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    int n;
    cin >> n;
    string str, str2;
    cin >> str >> str2;
    int engi = 0, en = 0, alien = 0, goru = 0;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '1' and str2[i] == '1')
            alien++;
        else if (str[i] == '0' and str2[i] == '0')
            goru++;
        else if (str[i] == '1')
            engi++;
        else if (str2[i] == '1')
            en++;
    }
    int totalTeam = min(engi, en);
    int baki = goru + max(0, engi - totalTeam) + max(0, en - totalTeam);
    int wow = min(baki, alien);
    alien -= wow;
    alien = max(0, alien / 2);
    cout << totalTeam + alien + wow << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
