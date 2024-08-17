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
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<int> pre(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        pre[i] = pre[i - 1];
        if (str[i - 1] == '1')
            pre[i]++;
    }
    for (int i = 1; i < n; ++i)
    {
        if (str[i] == '0')
        {
            int cnt = pre[i];
            if (cnt)
            {
                if (cnt <= k)
                {
                    int indx = cnt;
                    k -= cnt;
                    int yo = i - indx;
                    if (yo >= 0 and yo < n)
                        swap(str[i - indx], str[i]);
                }
                else
                {
                    int indx = k;
                    k = 0;
                    int yo = i - indx;
                    if (yo >= 0 and yo < n)
                        swap(str[i - indx], str[i]);
                }
            }
            if (k == 0)
                break;
        }
    }

    cout << str << endl;
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
