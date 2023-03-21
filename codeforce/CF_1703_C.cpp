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
        int n;
        cin >> n;
        int arr[n]; 
        for (int i = 0; i < n; i++)
        {
           cin >> arr[i] ; 
        }
        
        int s, count;
        string str;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> str;
            count = 0;
            for (int i = 0; i < s; i++)
            {
                if (str[i] == 'D')
                {
                  count ++; 
                }
                else count --; 
            }
            cout << ((arr[i] + count) +10)%10<< " "; 
        }
        cout << "\n" ; 
    }

    return 0;
}