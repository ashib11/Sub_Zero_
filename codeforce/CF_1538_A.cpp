#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int s;
        cin >> s;
        int arr[s + 2];

        int m = 0, l = 101, posm, posl;
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
            // cout << m << endl;
            if (m < arr[i])
            {

                m = arr[i];
                //  cout << m << endl;
                posm = i;
            }
            if (l > arr[i])
            {

                l = arr[i];

                posl = i;
            }
        }
        int x = min(posm,posl) ; 
        int y = max(posl,posm); 
        cout << min((1+y), min((s-x),(x+s-y+1)))<<endl; 
    }
    return 0;
}