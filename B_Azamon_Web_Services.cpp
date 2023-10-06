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
// find_by_order
// value_of_key
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int m = 32000;
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
                v[i] = true;
        }
    }
}
void solve()
{
    string s, c;
    cin >> s >> c;
    char temp = 'z';
    int indx = -1;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        temp = min(temp, s[i]);
        if (temp != s[i])
        {
            indx = i;
        }
    }
    if (indx != -1)
        swap(s[indx], *min_element(allr(s) - indx));

    if (s < c)
        cout << s << endl;
    else
        cout << "---" << endl;
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
