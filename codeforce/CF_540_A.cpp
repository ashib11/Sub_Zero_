#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + min(abs(a[i] - b[i]), 10 - abs(a[i] - b[i]));
    }
    cout << sum << endl; 
    return 0;
}