#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int s, n;
        cin >> s;
        int arr[s] = {0};
        int flag = 0;
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < s; i++)
        {
            for (int j = i + 1; j < s; j++)
            {
                if (arr[i] == arr[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        flag == 1 ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}