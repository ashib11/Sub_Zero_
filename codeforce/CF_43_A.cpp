#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a, b, c;
    cin >> n;
    int sum1 = 1, sum2 = 0;
    cin >> b;
    a = b;
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        if (b == a)
        {

            sum1 += 1;
        }
        else
        {
            c = b;
            sum2 += 1;
        }
    }
   if (sum2 > sum1)
   {
    cout << c << endl; 
   }
   else cout << a << endl; 
    return 0;
}
//   cout << sum1 << "= " << a << endl
//          << sum2 << "= " << c << endl;