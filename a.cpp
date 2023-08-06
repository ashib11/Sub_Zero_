#include <iostream>
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
    int ans = 0;
    while (n--)
    {
        int x;
        cin >> x;
        ans = ans ^ x;
    }

    if(ans) cout << ans << endl; 
    else cout << -1 << endl; 

    return 0;
}
