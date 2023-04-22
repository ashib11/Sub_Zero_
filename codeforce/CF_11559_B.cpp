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
    long long sum = 0;
    int n, k;
    cin >> n >> k;
    if (n == k)
        cout << 0 << endl;

    else
    {
        for (int i = 1; i < n; ++i)
        {
             if (sum >= k)
                break;
            sum += i;
           
        }
         cout << sum - k << endl;
    }
   
    return 0;
}