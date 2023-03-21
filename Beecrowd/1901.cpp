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
    int arr[300][300];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int check[10000] = {0};
    int counter = 2 * n;
    int x, y;
    while (counter--)
    {
        cin >> x >> y;
        check[arr[x - 1][y - 1]] = 1;
    }
    int sum = 0;
    for (int i = 0; i <= 1000; i++)
    {
        sum += check[i];
    }
    cout << sum << endl;
    return 0;
}