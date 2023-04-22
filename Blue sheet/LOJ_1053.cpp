#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int test;
    cin >> test;
    for (int i = 1; i <= test; ++i)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if ((a[0] * a[0]) + (a[1] * a[1]) == (a[2] * a[2]))
        {
            cout << "Case " << i << ": "
                 << "yes\n";
        }
        else
            cout << "Case " << i << ": "
                 << "no\n";
    }
    return 0;
}