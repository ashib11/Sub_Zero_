#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define read(a)       \
    for (auto &i : a) \
    cin >> i
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;

    while (t--)
    {
          string a, b;
          cin >> a >> b;
          int j = 0;
          for (int i = 0; i < a.size(); i++)
        {
               if (j >= b.size()) { break; }
               if (a[i] == b[j])
            {
                j++;
                continue;
            }
               if (a[i] == '?')
            {
                    a[i] = b[j];
                    j++;
                continue;
                  
            }
             
        }
          for (int i = 0; i < a.size(); i++)
        {
               if (a[i] == '?') { a[i] = 'a'; }
             
        }
          if (j >= b.size())
        {
            cout << "YES" << endl;
            cout << a << endl;
        }
          else
        {
               cout << "NO" << endl;
             
        }
    }

    return 0;
}
D