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
    ll a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;

    set<pair<ll, ll>> kingpos, queenpos;

    kingpos.insert({kx + a, ky + b});
    kingpos.insert({kx + a, ky - b});
    kingpos.insert({kx - a, ky + b});
    kingpos.insert({kx - a, ky - b});

    kingpos.insert({kx + b, ky + a});
    kingpos.insert({kx - b, ky + a});
    kingpos.insert({kx + b, ky - a});
    kingpos.insert({kx - b, ky - a});

    queenpos.insert({qx + a, qy + b});
    queenpos.insert({qx + a, qy - b});
    queenpos.insert({qx - a, qy + b});
    queenpos.insert({qx - a, qy - b});

    queenpos.insert({qx + b, qy + a});
    queenpos.insert({qx - b, qy + a});
    queenpos.insert({qx + b, qy - a});
    queenpos.insert({qx - b, qy - a});

   
    ll cnt = 0;
    vector<ll> x, y;
    for (auto it : kingpos)
    {

        if (queenpos.find(it) != queenpos.end())
            cnt++;
    }

    cout << cnt << endl;
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
