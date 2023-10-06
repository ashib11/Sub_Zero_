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
int main()
{
    fastIO();
    int n;
    while (1)
    {

        cin >> n;
        if (n == 0)
            break;
        ll cnt = 0;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            if (x != i)
                cnt++;
        }
        cout << cnt << endl;
        if (cnt == 0 || (cnt % 2 != 0 && cnt == n))
            cout << "Carlos" << endl;
        else
            cout << "Marcelo" << endl;
    }
    return 0;
}