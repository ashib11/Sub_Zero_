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
    if (n % 3 == 0)
    {
        cout << n / 3 << " " << n / 3 << " " << n / 3 << endl;
        }
    else
    {
        int rem = n % 3;
        int a = n / 3;
        int b = n / 3;
        int c = n / 3;
        while (1)
        {
            if (rem <= 0)
                break;
            c++;
            // cout << rem << endl; 
            rem--;
            // cout << "f " << rem << endl;  
            if (rem <= 0)
                break;
            b++;
            rem--;
            //  cout << "s " << rem << endl;  
            if (rem <= 0)
                break;
            a++;
            rem--;
        }
        cout << a << " " << b << " " << c << endl;
    }
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