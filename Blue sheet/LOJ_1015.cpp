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
    int test; 
    cin >> test; 
   for(int i=1; i<=test; ++i)
    {
        int n; 
        cin >> n; 
        int sum=0; 
        while (n--)
        {
            int x;
            cin >> x; 

            if(x>0) sum+=x; 
        }
        cout << "Case " << i << ": " << sum << endl; 

    }
    
    return 0;
}