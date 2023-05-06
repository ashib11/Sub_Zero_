#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) << x

bool fun(int arr[], int n, int target, int sum)
{
    if (n == 0)
        return sum == target;
    if (fun(arr, n - 1, target, sum + arr[n - 1]))
    {
        return true;
    }
    if (fun(arr, n - 1, target, sum - arr[n - 1]))
    {
        return true;
    }
    else
        return false;
}
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    if (fun(arr, n, x, 0))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}