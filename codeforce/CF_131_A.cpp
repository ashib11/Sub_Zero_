#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int flag = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << a << endl;
    }
    else
    {

        if (a[0] >= 'a' && a[0] <= 'z')
        {
            a[0] = toupper(a[0]);
            for (int i = 1; i < a.size(); i++)
            {
                a[i] = tolower(a[i]);
            }
              cout << a << endl;
        }
        else{
            for (int i = 0; i < a.size(); i++)
            {
                a[i] = tolower(a[i]);
            }
              cout << a << endl;
        }
    }
    
    return 0;
}