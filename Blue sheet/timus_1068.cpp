#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    int sum = 0;
    if (n > 0)
    {
        while (n != 0)
        {
            sum += n;
            n--;
        }
    }
    else
    {
        while (n<2)
        {
            sum+=n; 
            n++; 
        }
        
    }
    cout << sum << endl; 
    return 0;
}