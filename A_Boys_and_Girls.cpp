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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<char> v((n + m));
    if (n > m)
    {

        int k = m;
        for (int i = 1; i < (n + m); i += 2)
        {
            v[i] = 'G';
            k--;
            if (k <= 0)
                break;
        }
        for (int i = 0; i < (n + m); ++i)
        {
            if (v[i] != 'G')
                v[i] = 'B';
        }
    }
    else
    {
        int k = n;
        for (int i = 1; i < (n + m); i += 2)
        {
            v[i] = 'B';
            k--;
            if (k <= 0)
                break;
        }
        for (int i = 0; i < (n + m); ++i)
        {
            if (v[i] != 'B')
                v[i] = 'G';
        }
    }
    for (int i = 0; i < (n + m); ++i)
    {
        cout << v[i];
    }
    cout << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while (tc--)
    {
        solve();
    }
    return 0;
}
