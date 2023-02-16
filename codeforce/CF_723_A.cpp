#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int avg = (a + b + c) / 3;
    int x1 = abs(avg - a);
    int x2 = abs(avg - b);
    int x3 = abs(avg - c);
    int lowest = min(x1,min(x2,x3)); 
    if (lowest == x1 )
    {
        int sum = abs(a-b) + abs(a-c); 
        cout<<sum<<endl; 
    }
    else if (lowest == x2 )
    {
        int sum = abs(a-b) + abs(b-c); 
        cout<<sum<<endl; 
    }
    else if (lowest == x3 )
    {
        int sum = abs(a-c) + abs(b-c); 
        cout<<sum<<endl; 
    }

    return 0;
}