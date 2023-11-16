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
const int N = 1e4 + 10;
int n;
vector<int> v;
int lis[N], lds[N];
int LIS(int idx)
{
    vector<int> temp;
    temp.push_back(v[0]);
    int len = 1;
    for (int i = 1; i < idx; ++i)
    {
        if (v[i] > temp.back())
        {
            temp.push_back(v[i]);
            len++;
        }
        else
        {
            int index = lower_bound(all(temp), v[i]) - temp.begin();
            temp[index] = v[i];
        }
    }
    return len;
}
int LDS(int idx)
{
    vector<int> temp;
    temp.push_back(v[0]);
    int len = 1;
    for (int i = 1; i < idx; ++i)
    {
        if (v[i] < temp.back())
        {
            temp.push_back(v[i]);
            len++;
        }
        else
        {
            int index = lower_bound(all(temp), v[i]) - temp.begin();
            temp[index] = v[i];
        }
    }
    return len;
}
int main()
{
    fastIO();

    while (cin >> n)
    {
        v.resize(n);
        for (auto &i : v)
            cin >> i;
        vector<int> ans;
        for (int i = 0; i < n; ++i)
        {
            int a = LIS(i);
            int b = LDS(i);
            if (a % 2)
                ans.push_back(a);
            if (b % 2)
                ans.push_back(b);
        }
        sort(allr(ans));
        for (int i = 0; i < ans.size(); ++i)
        {
            if (ans[i] == ans[i + 1])
            {
                cout << ans[i] + ans[i] - 1 << endl;
                break;
            }
        }
    }
    return 0;
}
