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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int s, d;
        cin >> s >> d;
        int arr[s];
        int flag = 0;
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
            if (arr[i] > d)
                flag = 1;
        }
        if (flag == 1)
        {
            sort(arr, arr + s);
            if (arr[0] + arr[1] <= d)
            {
               flag =0; 
            }
        }

        flag ==0? cout <<"YES\n" : cout << "NO\n"; 
    }
    return 0;
}