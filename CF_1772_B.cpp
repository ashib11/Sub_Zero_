#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    int a, b, c, d, temp, flag = 0;
    for (int i = 0; i < test_case; i++)
    {
        cin >> a >> b >> c >> d;
        flag =0; 
        for (int j = 0; j < 4; j++)
        {
            if ((a < b) && (a < c) && (b < d) && (c < d))
            {
                flag = 1;
                cout << "YES\n";
                break;
            }
            else  
            {
                temp = a;
                a = c;
                c = d; 
                d = b ; 
                b = temp; 
                
            }
        }
        if (flag == 0)
        {
           cout << "NO\n"; 
        }
        
    }

    return 0;
}