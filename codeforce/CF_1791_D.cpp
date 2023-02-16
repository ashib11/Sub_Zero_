#include <bits/stdc++.h>
using namespace std;
int main()

{
    int tc, n, max;
    int m1[50] = {0},m2[50] = {0};
    string x;
    cin >> tc; 

    while (tc--)
    {
        int ans = 0;
        max = 0;
        m1[50] = {0},m2[50] = {0};
       
    //    for (int i = 0; i < 26; i++)
    //    {
    //     m1[i]=0; 
    //     m2[i]=0; 
    //    }
       

        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            m2[x[i] - 97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (m2[i] != 0)
                max++;
        }
        // cout << " max " << max << endl;
        for (int i = 0; i < n; i++)
        {

            m2[x[i] - 97]--;
            if ((m2[x[i] - 97]) == 0)
            {
                max--;
                //   cout << "m2 max " << max << endl;
            }
            if ((m1[x[i] - 97]) == 0)
            {

                max++;
                // cout << "m1 max " << max << endl;
            }
            m1[x[i] - 'a']++;

            if (max > ans)
            {
                ans = max;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}