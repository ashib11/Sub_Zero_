#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int l = a.size();
    int count = 0,flag=0;
    for (int i = 0; i < l; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
         if (a[i] != a[i + 1])
        {
            count = 0;
        }
         if (count == 6)
        {
            flag =1; 
            cout << "YES\n";
            break;
        }
    }

  
    if (flag==0)
        cout << "NO\n";
    return 0;
}