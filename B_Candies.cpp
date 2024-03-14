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

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "-1" << endl;
        return;
    }
    vector<int> v;
    while (n != 1)
    {
        if (((n + 1) / 2) % 2)
        {
            n++;
            v.push_back(1);
        }
        else
        {
            n--;
            v.push_back(2);
        }
        n /= 2;
    }
    cout << v.size() << endl;
    for (int i = v.size() - 1; i >= 0; --i)
        cout << v[i] << ' ';
    cout << endl;
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
