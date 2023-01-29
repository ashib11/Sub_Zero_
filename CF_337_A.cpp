#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, dif = 1001;
    cin >> n >> m;
    int arr[m + 10];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    for (int i = 0; i <= m - n; i++)
    {
        dif = min((arr[i + n - 1] - arr[i]), dif);
    }
    cout << dif << endl; 
    return 0;
}