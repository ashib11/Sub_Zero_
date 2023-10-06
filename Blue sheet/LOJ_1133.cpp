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
    for (int i = 1; i <= tc; ++i)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int j = 0; j < n; ++j)
            cin >> arr[j];
        char x;
        for(int h =0 ; h < m ; ++h)
        {
            cin >> x;
            if (x == 'P')
            {
                int a, b;
                cin >> a >> b;
                swap(arr[a], arr[b]);
            }
            else if (x == 'R')
                reverse(arr, arr + n);
            else
            {
                int d;
                cin >> d;
                if (x == 'S')
                    for (int j = 0; j < n; ++j)
                        arr[j] += d;
                else if (x == 'M')
                    for (int j = 0; j < n; ++j)
                        arr[j] *= d;
                else if (x == 'D')
                    for (int j = 0; j < n; ++j)
                        arr[j] /= d;
            }
        }
        cout << "Case " << i << ":\n";
        for (int j = 0; j < n; ++j)
            cout << arr[j] << " ";
        cout << endl;
    }
    return 0;
}