#include <iostream>
using namespace std;
int main()
{
    int tc;
    for (int i = 0; i < tc; i++)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            flag = 0;
            if (a[i] != a[i + 1])
            {
                for (int k = i + 1; k < n; k++)
                {
                    if (a[k] == a[k + 1])
                    {
                        flag = 1;
                        cout << "NO\n";
                        break;
                    }
                }
            }
        }
        if (flag == 0)
        {
            cout << "Yes\n"; 
        }
        
    }

    return 0;
}