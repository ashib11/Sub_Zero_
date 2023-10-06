#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test_case, x, y, n;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        cin >> x >> y >> n;
        long long int ans = n - (n%x) + y; 
        if (ans <= n)
        {
            cout << ans << endl;
        }
        else
        {
            cout << (n - n%x - (x-y))<< endl; 
        }
    }
 
    return 0;
}