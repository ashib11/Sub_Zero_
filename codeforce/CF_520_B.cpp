#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    while (m > n)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
            m += 1;
        count++;
    }
    count = count + n - m;
    cout << count << endl;
}