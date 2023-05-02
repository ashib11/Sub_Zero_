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
#define F(i, a, b) for (int i = a; i < b; i++)
#define B(i, b, a) for (int i = b; i >= a; i--)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 int n;
int arr[100000];
int result = i_mx; 
int sum = 0; 
void rec(int i,int s){
    if(i==n){
     result = min(result,abs(s-(sum-s)));
        return ; 
    }
    rec(i+1,s);
    rec(i+1,s+arr[i]); 

}
int main()
{
    fastIO();
    
    cin >> n; 
    
    for(int i =0 ; i<n; ++i) {
        cin >> arr[i]; 
        sum+=arr[i]; 
    }
     rec(0,0);
     cout << result << endl; 
    return 0;
}   