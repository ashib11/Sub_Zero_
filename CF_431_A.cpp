#include<iostream>
using namespace std;
int main()
{
int tc, tm, m; 
cin >> tc; 
for (int i = 1; i <= tc; i++)
{
    int count =0; 
    cin >> tm ; 
    for (int k = 0; k < 3; k++)
    {
        cin >> m; 
        if (m>tm)
        {
            count++; 
        }
        
    }
     cout << count << endl; 
   
    
}

return 0;
}