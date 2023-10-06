#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define endl "\n"
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
    int arr[n][n];
    int x = 1;
    for (int i = n - 1; i >= 0; --i)
    {
        // cout << "check " << endl;
        // cout << i << endl;
        int check = i;
        for (int j = 0; j < x; ++j)
        {
            arr[j][check] = x;

            ++x;
            if (check == n - 1)
                break;
            check++;
        }
    }
    int limit = n - 1;
    for (int i = 1; i <= n - 1; ++i)
    {
        
        int index = i;
        for (int j = 0; j < limit; j++)
        {

            arr[index][j] = x;
            // cout << arr[index][j] << " " << index << "," << j << endl;
            x++;
            index++;
        }
        --limit;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}