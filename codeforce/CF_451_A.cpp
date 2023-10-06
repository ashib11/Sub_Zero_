#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int a,b; 
    cin >> a >> b; 
    min(a,b) %2 ==1? cout << "Akshat\n" : cout << "Malvika\n" ; 
    return 0;
}