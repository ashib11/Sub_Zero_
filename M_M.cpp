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
const int N = 1e5 + 100;
vector<bool> boro(N);
vector<int> solve(N), penalty(N);
void solves()
{
    int n, m;
    int pos = 1;
    cin >> n >> m;
    vector<int> ans;
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        solve[a]++;
        penalty[a] += b;
        if (solve[a] == 1)
            ans.push_back(a);
        if (a == 1)
        {
            for (int j = 0; j < (int)ans.size(); ++j)
            {
                if (boro[j] == false || ans[j]==1)
                {
                    continue;
                }
                else if (solve[ans[j]] < solve[1])
                {
                    pos--;
                    boro[ans[j]] = false;
                }
                else if (solve[ans[j]] == solve[1] and penalty[ans[j]] >= penalty[1])
                {
                    boro[ans[j]] = false;
                    pos--;
                }
            }
        }
        else if (boro[a] == false)
        {
            if (solve[a] > solve[1] || (solve[a] == solve[1] and penalty[a] < penalty[1]))

            {
                pos++;
                boro[a] = true;
            }
        }
        cout << pos << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solves();
    }
    return 0;
}
