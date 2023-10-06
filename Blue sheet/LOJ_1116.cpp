#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int t; 
    cin >> t; 
    for(int i =1 ; i <= t; ++i) {
        ll num,odd,even; 
        cin >> num ; 
        if(num%2==0) {
            odd = num/2; 
            even = 2; 
            while (odd%2==0)
            {
                odd/=2; 
                even*=2; 
            }
            cout << "Case " << i << ": " << odd <<" "<< even<< endl;  
        }
        else cout << "Case " << i << ": Impossible" << endl; 
    }
    return 0;
}