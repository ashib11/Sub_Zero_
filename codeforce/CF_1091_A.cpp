#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, b, r;
    cin >> y >> b >> r;
    int s = min(y,b-1); 
    s = min(s,r-2); 
    cout << s*3 +  3 << endl; 

    return 0;
}