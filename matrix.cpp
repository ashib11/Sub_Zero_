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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

int main()
{
    fastIO();
    int tc = 1;
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int mx = (n + 1) / 2;
        // 1 2 3//
        int arr[101][101] = {0};
        int s = 0, end = n;
        for (int i = 1; i <= mx; ++i)
        {
            for (int j = s; j < end; ++j)
            {
                for (int k = s; k < end; ++k)
                {
                    arr[j][k] = i;
                }
            }
          
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cout << arr[i][j] << ' ';
            cout << endl; 
        }
        cout << endl; 
    }
    return 0;
}
