#include <iostream>
using namespace std;
int main()
{
    
    int tc;
    cin >> tc; 
    for (int i = 0; i < tc; i++)
    {
        int arr[100] = {0};
        int n;
        cin >> n;
        string a;
        cin >> a;
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            flag = 0;
            if(a[j] != a[j - 1]) 
            {
                arr[a[j]] += 1;
            }
            
            
        }

        for (int j = 65; j < 91; j++)
        {
            if (arr[j]>1)
            {
               cout << "NO\n"; 
               flag = 1; 
               break; 
            }
            
        }
        if (flag == 0)
        {
           cout << "YES\n"; 
        }
        
    }

    return 0;
}