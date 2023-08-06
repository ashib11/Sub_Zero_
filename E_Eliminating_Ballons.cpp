#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

int arr[1000000] = {0};

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();

    int n, x, count = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;

        if(arr[x+1] == 0)
        {
            count++;
            arr[x]++;
        }
        else
        {
            arr[x]++;
            arr[x+1]--;
        }
    }

    cout << count << endl;

    return 0;
}