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
    int n;
    cin >> n;
    int arr[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int count = 0;
            count += arr[i][j];
            count += arr[i][j + 1];
            count += arr[i + 1][j];
            count += arr[i + 1][j + 1];
            if (count < 2)
            {
                cout << "U";
            }
            else
                cout << "S";
        }
         cout << "\n";
    }
   
    return 0;
}