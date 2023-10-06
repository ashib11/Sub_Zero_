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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if(n%3==1) {
             cout << n / 3  << " " << n / 3 + n % 3 + 1 << " " << n / 3 - 1 << "\n";
            ;
        }
        else if (n % 3 != 0)
        {
            cout << n / 3 + 1 << " " << n / 3 + n % 3 << " " << n / 3 - 1 << "\n";
            ;
        }
        else
            cout << n / 3 << " " << (n / 3) + 1 << " " << (n / 3) - 1 << "\n";
        ;
    }
    return 0;
}