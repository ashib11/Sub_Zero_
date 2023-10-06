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
ll cnt = 0;
const int N = 1e6;
int arr[N];
int partition(int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (true)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
void quickSort(int l, int h)
{
    if (l < h)
    {
        cnt++;
        int j = partition(l, h);
        quickSort(l, j);
        quickSort(j + 1, h);
    }
}
void solve()
{
    int n;
    cin >> n;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    quickSort(0, n - 1);
    cout << cnt << endl;
    cnt = 0;
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