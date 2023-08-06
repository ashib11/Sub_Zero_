#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

const int N = 1e6;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[N];
    int cnt = 0;
    int index;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {

        if (arr[i] == arr[0])
        {
            cnt++;
        }
        if (cnt == k)
        {
            index = i;
            break;
        }
    }
    int another = 0;
    if (arr[0] != arr[n - 1])
    {
        int checker = arr[n - 1];

        for (int i = n - 1; i >= index; i--)
        {
            if (another == k)
                break;
            if (checker == arr[i])
                another++;
        }
        if (another >= k && cnt >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if (cnt >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // cout << another << " " << cnt << " " << index << endl;
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
