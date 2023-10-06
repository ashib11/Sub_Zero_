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

void selection_sort(int arr[], int n)
{
    int mn;
    for (int i = 0; i < n - 1; ++i)
    {
        mn = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[mn])
            {
                mn = j;
            }
        }
        if (mn != i)
        {
            swap(arr[mn], arr[i]);
        }
    }
}
void solve()
{
    int arr[] = {4, 23, 5, 1, 3, 5};
    selection_sort(arr, 6);
    for (int i = 0; i < 6; ++i)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}