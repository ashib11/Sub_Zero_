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
const int N = 1e5;
int arr[N];
int ans;
void merge(int l, int m, int r)
{
    int sz_b = m - l + 1, sz_c = r - m;
    int b[sz_b], c[sz_c];
    for (int i = 0; i < sz_b; ++i)
        b[i] = arr[l + i];
    for (int i = 0; i < sz_c; ++i)
        c[i] = arr[m + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < sz_b && j < sz_c)
    {
        if (b[i] > c[j])
        {
            arr[k++] = c[j++];
            ans += sz_b - i;
        }
        else
            arr[k++] = b[i++];
    }
    while (i < sz_b)
        arr[k++] = b[i++];
    while (j < sz_c)
        arr[k++] = c[j++];
}
void mergesort(ll l, ll r)
{
    if (r > l)
    {
        int m = (l + r) / 2;
        mergesort(l, m);
        mergesort(m + 1, r);
        merge(l, m, r);
    }
}

int main()
{
    fastIO();
    int n;
    while (cin >> n && n)
    {
        ans = 0;
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        mergesort(0, n - 1);
        if (ans % 2)
            cout << "Marcelo" << endl;
        else
            cout << "Carlos" << endl;
    }
    return 0;
}
