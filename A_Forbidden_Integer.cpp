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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; ++i)
            {
                cout << 1 << " ";
            }
        }

        else if (n % 2 == 0 && k > 1)
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i =0 ; i < n/2 ; ++i)
            {
                cout << 2 << " ";
            }
        }
        else if (n % 2 != 0 && k > 2)

        {
            cout << "YES" << endl;
            cout << ((n-3) / 2) + 1 << endl;
            cout << "3 ";
            for (int i = 1; i <= (n-3)/2; ++i)
            {
                cout << 2 << " ";
            }
        }
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
