#include <bits/stdc++.h>
using namespace std;
int arr[41][41];

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int r;
    cin >> r; 
    long long ans; 
    ans = pow(3,r) ; 
    cout << ans<< endl;
    return 0;
}