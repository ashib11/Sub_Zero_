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
void solve()
{
    int n;
    cin >> n;
    int arr[n], brr[n];

    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
        brr[j] = arr[j];
    }

    sort(brr, brr + n);
    int possible = 1;

    for (int j = 0; j < n; j++)
    {
        if (((arr[j] % 2 == 0) && (brr[j] % 2 != 0)) || ((arr[j] % 2 != 0) && (brr[j] % 2 == 0)))
        {
            cout << "NO" << endl;
            possible = 0;
            break;
        }
    }

    if (possible)
        cout << "YES" << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}