#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
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
    int arr[n + 10][n + 10] = {0};
    for (int i = 0; i < n; ++i)
    {

        int v, k;
        cin >> v >> k;
        for (int j = 0; j < k; ++j)
        {
            int x;
            cin >> x;
            arr[v][x] = 1;
        }
    }
    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < n + 1; ++j)
        {
            cout << arr[i][j];
            if(j!=n) cout << " "; 
        }
        cout << endl;
    }

    return 0;
}