#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }
        sum==n? cout << 0 <<endl : sum<n?  cout << 1 << endl : cout << abs(sum-n) << endl ; 
    }
    return 0;
}