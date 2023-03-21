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
            if (arr[i] == 1)
                arr[i]++;
        }
        for (int i = 1; i < s; i++)
        {
            if (arr[i] % arr[i - 1] == 0)
                arr[i]++;
        }
        for (int i = 0; i < s; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}