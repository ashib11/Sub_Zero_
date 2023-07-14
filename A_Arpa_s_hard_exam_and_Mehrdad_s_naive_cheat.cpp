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
    // for (int i = 1; i <= 8; ++i)
    // {
    //     cout << (ll)pow(1378ll, i) << endl;
    // }
    //4 2 6 8 4 2 6 8
    int n;
    cin >> n;
    if (n % 4 == 1)
        cout << 8 << endl;
    else if (n % 4 == 2)
        cout << 4 << endl;
    else if (n % 4 == 3)
        cout << 2 << endl;
    else if (n % 4 == 0)
        cout << 6 << endl;
    return 0;
}