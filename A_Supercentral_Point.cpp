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
void solve()
{
    int n;
    cin >> n;
    int arr[n], brr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i] >> brr[i];
    int cnt=0; 
    for (int i = 0; i < n; ++i)
    {
        bool r = 0, l = 0, u = 0, d = 0;
        for (int j = 0; j < n; ++j)
        {
            if (arr[i] < arr[j] && brr[i] == brr[j])
                r = 1;
            else if (arr[i] > arr[j] && brr[i] == brr[j])
                l = 1;
            else if ((arr[i] == arr[j] && brr[i] > brr[j]))
                d = 1;
            else if ((arr[i] == arr[j] && brr[i] < brr[j]))
                u = 1;
        }
        if(r+l+d+u==4) cnt++; 
    }
    cout << cnt << endl; 
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}