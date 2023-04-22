#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int m, n;
        cin >> m >> n;
        if (m == 1 || n == 1)
        {
            cout << "Case " << i << ": " << max(m, n) << endl;
        }
        else if (m == 2 || n == 2)
        {
            int ans = (max(m, n) / 4) * 4 + (min(max(m, n) % 4 - 2, 1)) * 2;
            cout << "Case " << i << ": " << ans << endl;
        }
        else
        {
            int ans = (m * n + 1) / 2;
            cout << "Case " << i << ": " << ans << endl;
        }
    }
    return 0;
}
