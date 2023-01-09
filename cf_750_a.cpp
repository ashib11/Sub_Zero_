#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int time = 240 - k;
    int sum = 0;
    int i = 1;
    while (1)
    {
       
        sum = sum + (i * 5);
      
        if (sum > time)
        {
           
            i = i - 1;
            break;
        }
        if (i == n)
        {
           break; 
        }
        
          i++;
    }
    cout << i << endl;
}