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
    int q,d,p; 
    while (1)
    {
       cin >> q;
       if(q == 0) break; 
       cin  >> d >> p; 
        cout << ((p*d*q)/(p-q)); 
        if (((p*d*q)/(p-q))>1)
        {
           cout  << " paginas" << "\n" ; 
        }
        else cout << " pagina"<< "\n" ; 
       
    }

    
    return 0;
}