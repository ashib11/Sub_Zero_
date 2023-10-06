#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int s;
    cin >> s; 
    int arr[s+3]; 
    for(int i=1; i<=s; ++i) {
        cin >> arr[i]; 
    }
    int dif = 1000; 
    int x,y; 
    arr[0] = arr[s]; 
    for(int i=0; i<s; ++i) {
        int check = abs(arr[i]-arr[i+1]); 
        if(check<dif) {
            dif = check; 
            x = i, y = i+1; 
        }
        // cout << arr[i] << endl; 
    }
    if(x==0) 
    x = s; 
    cout << x << " " << y << endl; 
    return 0;
}