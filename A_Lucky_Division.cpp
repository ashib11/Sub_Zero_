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
   int n; 
   cin >> n; 
    if ((n % 4 == 0) || (n % 7 == 0) || (n % 44 == 0) || (n % 444 == 0) || (n % 77 == 0) || (n % 777 == 0) || (n % 47 == 0) || (n % 74 == 0) || (n % 477 == 0) || (n % 744 == 0))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}