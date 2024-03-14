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
char arr[3][3];
set<string> st;
vector<string> v;
const int N = 3;
bool chck(int r1, int c1, int r2, int c2, int r3, int c3)
{
    return (r1 != r2 || c1 != c2) && (r1 != r3 || c1 != c3) && (r2 != r3 || c2 != c3) &&
           abs(r1 - r2) <= 1 && abs(c1 - c2) <= 1 &&
           abs(r2 - r3) <= 1 && abs(c2 - c3) <= 1;
}
void func()
{
    for (int r1 = 0; r1 < N; ++r1)
    {
        for (int c1 = 0; c1 < N; ++c1)
        {
            for (int r2 = 0; r2 < N; ++r2)
            {
                for (int c2 = 0; c2 < N; ++c2)
                {
                    for (int r3 = 0; r3 < N; ++r3)
                    {
                        for (int c3 = 0; c3 < N; ++c3)
                        {
                            if (chck(r1, c1, r2, c2, r3, c3))
                            {
                                // cout << arr[r1][c1] << arr[r2][c2] << arr[r3][c3] << endl;
                                st.insert(string(1, arr[r1][c1]) + arr[r2][c2] + arr[r3][c3]);
                            }
                        }
                    }
                }
            }
        }
    }
}
void solve()
{

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> arr[i][j];
    func();
    cout << *st.begin() << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
