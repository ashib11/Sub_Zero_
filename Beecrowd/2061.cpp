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
    int tab, steps;
    cin >> tab >> steps; 
    int count =0; 
    while (steps--)
    {
        string a; 
        cin >> a; 
        
        if (a[0]=='f')
        {
           tab++; 
        }
        else tab--; 
    }
    cout << tab << endl; 
    return 0;
}