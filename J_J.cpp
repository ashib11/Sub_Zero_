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
// find_by_order();
// order_of_key();

int main()
{
    fastIO();
    ll a, b;
    ll sma = 0, smb = 0;
    int tc = 1;
    while (cin >> a >> b and a and b)
    {
        cout << tc << ". ";
        map<ll, ll> pa, pb;
        for (int i = 2; (i * i) <= a; ++i)
        {
            int cnt = 0;
            if (a % i == 0)
            {
                sma += i;
                while (a % i == 0)
                {
                    ++cnt;
                    a /= i;
                }
                pa[i] = cnt;
            }
        }
        if (a > 2)
        {
            sma += a;
            pa[a] = 1;
        }

        for (int i = 2; (i * i) <= b; ++i)
        {
            int cnt = 0;
            if (b % i == 0)
            {
                smb += i;
                while (b % i == 0)
                {
                    ++cnt;
                    b /= i;
                }
                pb[i] = cnt;
            }
        }
        if (b > 2)
        {
            pb[b] = 1;
            smb += b;
        }
        set<ll> all;
        for (auto it : pa)
        {
            // cout << it.first << "p" << it.second << " ";
            all.insert(it.first);
        }
        for (auto it : pb)
        {
            // cout << it.first << "p" << it.second << " ";
            all.insert(it.first);
        }
        ll ans = 0;
        for (auto it : all)
        {
            ans += abs(pa[it] - pb[it]);
            sma += it;
        }
        ll n = all.size();
        cout << n << ":" << ans << endl;
        tc++;
    }
    return 0;
}
