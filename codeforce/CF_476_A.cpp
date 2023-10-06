#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, d = 0;
    cin >> n >> m;
    n < m ? cout << "-1" : cout << ((n + 2 * m - 1) / 2 / m )* m;
    return 0;
}