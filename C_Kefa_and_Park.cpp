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
    int n, m; 
    cin >> n >> m; 
    int count =0; 
    while(n){
        if(m%n==0) {
            count+=2; 
            n/=2; 
        }
        else n/=2; 
    }
    cout << count << endl; 
    return 0;
}