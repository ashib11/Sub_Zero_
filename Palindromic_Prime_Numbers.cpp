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
const int m = 1e7;
vector<int> all_prime;
vector<bool> v(m, false);
void seive()
{
    all_prime.push_back(2);
    for (ll i = 4; i < m; i += 2)
        v[i] = true;
    for (ll i = 3; i < m; i += 2)
    {
        if (v[i] == false)
        {
            all_prime.push_back(i);
            for (ll j = (i * i); j < m; j += (i + i))
                v[j] = true;
        }
    }
}
bool check(string a)
{
    int s = a.size();
    for (int i = 0; i < s / 2; ++i)
    {
        if (a[i] != a[s - i - 1])
            return false;
    }
    return true;
}
void solve()
{

    cout << all_prime.size() << endl; 
    int n;
    cin >> n;
    int od = 0, ev = 0;
    int cnt = 0;
    for (int i = 0; i < 400; ++i)
    {
        if (cnt == n)
            break;

        string x = to_string(all_prime[i]);
        int sz = x.size();
        if (check(x))
        {
            cnt++;
            if (sz % 2 != 0)
                od++;
            else
                ev++;
        }
    }
    cout << ev << " " << od << endl;
}
int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        seive();
        solve();
    }
    return 0;
}
