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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int z = 0, o = 0;
    for (auto it : str)
        if (it == '0')
            z++;
        else
            o++;
    if (z != o)
    {
        cout << -1 << endl;
        return;
    }
    deque<char> d;
    vector<int> pos;
    for (auto it : str)
    {
        d.push_back(it);
    }
    int cnt = 0;
    while (!d.empty())
    {
        if (d.front() == d.back())
        {
            if (d.front() == '0')
            {
                d.push_back('0');
                d.push_back('1');
                pos.push_back(n - cnt);
            }
            else
            {
                d.push_back('1');
                d.push_back('0');
                pos.push_back(cnt);
            }
        }
        n += 2;
        while (!d.empty() and d.front() != d.back())
        {
            d.pop_front();
            d.pop_back();
            ++cnt;
        }
    }
    cout << pos.size() << endl;
    for (auto it : pos)
        cout << it << " ";
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
