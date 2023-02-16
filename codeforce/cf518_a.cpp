#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int single, couple;
    a >= b ? single = b: single = a;
    couple = abs(a-b); 
    couple = couple / 2;
    cout << single << " " << couple << endl;
    return 0; 
}