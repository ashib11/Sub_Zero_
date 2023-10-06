#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    int N = 1e5 + 10;
    ll arr[N] = {0};
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr[x] += x;
    }
    ll ans=0; 
    for (int i = 2; i < N; ++i)
    {

        arr[i] = max(arr[i - 1], arr[i - 2] + arr[i]);
        ans = arr[i]; 
    }
    cout << ans << endl; 
    return 0;
}