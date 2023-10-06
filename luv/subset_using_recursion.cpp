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
vector<vector<int>> all_sub;
int number_subset; 
void generate(vector<int> &subset, int i, vector<int> &num)
{
    if (i == num.size())
    {
        all_sub.push_back(subset);
        number_subset++; 
        return;
    }
    generate(subset, i + 1, num);
    subset.push_back(num[i]);
    generate(subset, i + 1, num);
    subset.pop_back();
}
void solve()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; ++i)
        cin >> num[i];
    vector<int> empty;
    generate(empty, 0, num);
    for (auto x : all_sub)
    {
        for (auto i : x)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << number_subset << endl; 
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
