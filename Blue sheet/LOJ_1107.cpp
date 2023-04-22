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
    int t;
     cin  >> t; 
     for(int i = 1; i<=t; i++) {
        int x1,y1,x2,y2; 
        cin >> x1>> y1 >> x2 >> y2 ; 
        int m; 
        cin >> m; 
        cout << "Case " << i << "\n"; 
        while (m--)
        {
           int mx,my; 
           cin >> mx >> my; 
           if((mx>=x1 && mx<=x2) && (my>=y1 && my <=y2)) {
                cout << "Yes\n"; 
           }
           else cout <<"No\n"; 
        }
        
     }
    return 0;
}