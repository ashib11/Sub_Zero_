#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    int m, c, wm=0, wc=0, draw=0;
    for (int i = 0; i < test_case; i++)
    {
        
        cin >> m >> c;
        if (m > c)
        {
            wm++;
        }
        else if (m < c)
        {
            wc++;
        }
        else
            draw++;

        
    }
    if (wm>wc)
    {
       cout<<"Mishka\n"; 
    }
    else if (wm<wc)
    {
        cout << "Chris\n"; 
    }
    else {
        cout << "Friendship is magic!^^\n"; 
    }
    return 0;
}