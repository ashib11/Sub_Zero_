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
        int s;
        cin >> s;
        int arr[s];
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + s);
        int flag = 0;
        for (int i = 0; i < s - 2; i++)
        {
            if (arr[i] == arr[i + 2])
            {
                cout << arr[i] ;
                flag = 1;
                break; 
            }
        }

       flag == 0? cout <<"-1\n" :cout << "\n" ; 
    }

    return 0;
}