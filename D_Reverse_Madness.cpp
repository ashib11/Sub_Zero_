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

    string s;
    cin >> s;

    vector<int> l(k), r(k);
    for (int i = 0; i < k; i++)
    {
        cin >> l[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> r[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int left = 0, right = k - 1;
        int i = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (l[mid] <= x && x <= r[mid])
            {
                i = mid;
                break;
            }
            else if (x < l[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        if (i != -1)
        {
            int a = min(x, r[i] + l[i] - x);
            int b = max(x, r[i] + l[i] - x);
            reverse(s.begin() + a - 1, s.begin() + b);
        }
    }

    cout << s << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
