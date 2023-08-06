#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    string a;
    cin >> a;
   
    for (int i = 0; i < a.size()-1; i++)
    {
       if(a[i]==a[i+1]){
            cout << "No" << endl; 
            return 0 ; 
       }
    }
    cout << "Yes" << endl; 
    return 0;
}