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
        if (n <= 10)
            cout << 0 << " " << n << endl;
        else if (n % 2 == 0)
            cout << n / 2 << " " << n / 2 << endl;
        else
            cout << (n / 2) + 1 << " " << n / 2 << endl;
    }
    return 0;
}