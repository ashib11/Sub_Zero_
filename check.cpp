#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 100;
int main()
{
    long long n, x, ans = 0, pos, mx;
    cin >> n;

    long long arr[N] = {0};
    while (n--)
    {
        cin >> x;
        arr[x] += x;
    }

    while (1)
    {
        mx = *max_element(arr, arr + N);
        pos = max_element(arr, arr + N) - arr;
        if (mx == 0 || pos + 1 >= N || pos - 1 < 0)
            break;
        long long cmp = (arr[pos - 1] + arr[pos + 1]);
        if (mx < cmp)
        {
            ans += cmp;
            arr[pos - 1] = 0;
            arr[pos + 1] = 0;
            arr[pos - 2] = 0;
            arr[pos + 2] = 0;
            arr[pos] = 0;
        }
        else
        {
            ans += mx;
            arr[pos] = 0;
            arr[pos - 1] = 0;
            arr[pos + 1] = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
