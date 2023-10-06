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
    ll sum = 0; 
    for(int i =1 ; i <= n; i+=2){
        cout << i << endl; 
        sum+= i; 
    }
    cout << sum << endl; 
    return 0;
}