#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int N = 2e5+10;
int a[N];
int cnt = 0;
void merge(int l, int r, int m)
{
    int l_sz = m - l + 1;
    int L[l_sz + 1];
    int r_sz = r - m; // r-(m+1)-1
    int R[r_sz + 1];
    for (int i = 0; i < l_sz; ++i)
    {
        L[i] = a[i + l];
    }
    for (int i = 0; i < r_sz; ++i)
    {
        R[i] = a[i + m + 1];
    }
    L[l_sz] = R[r_sz] = INT_MAX;
    int l_i = 0;
    int r_i = 0;
    for (int i = l; i <= r; ++i)
    {
        if (L[l_i] <= R[r_i])
        {
            a[i] = L[l_i];
            ++l_i;
        }
        else
        {
            a[i] = R[r_i];
            ++r_i;
            cnt++;
        }
    }
}
void mergeSort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    mergeSort(0, n - 1);
    cout << cnt << endl;
    cnt = 0;
    memset(a, 0, sizeof(a) / a[0]);
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