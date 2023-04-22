#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n, sum;
    cin >> t;
    while (t--)
    {
        scanf("%llu", &n);
        if (n % 4 == 0)
        {
            cout << "1\n";
        }
        else if (n % 4 == 1)
        {
            cout << "7\n";
        }
        else if (n % 4 == 2)
        {
            cout << "9\n";
        }
        else
        {
            cout << "3\n";
        }
    }
    return 0;
}