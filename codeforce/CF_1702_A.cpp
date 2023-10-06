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
        int a;
        cin >> a;
        long long int m = 1;
        while (m <= a)
        {
            m *= 10;
        }
        cout << a -m / 10 << "\n" ; 
    }

    return 0;
}