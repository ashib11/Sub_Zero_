#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t = 0;
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        t += i * (n - i);
    }
    cout << t + n;
}