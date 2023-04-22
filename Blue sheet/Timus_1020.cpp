#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN 
#define i_mx INT_MAX 
#define p_b push_back 
#define yes cout<<"YES\n" 
#define no cout <<"NO\n" 
#define endl "\n"
#define getln(s) geline(cin,s) 
#define point(x,d) fixed << setprecision(d) << x
void fastIO() {
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
}
int main()
{
fastIO() ; 
int n;
    double r;
    cin >> n >> r;
    double x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    double total = 0;
    for (int i = 1; i < n; i++)
    {
        double s = sqrt(pow(x[i] - x[i - 1], 2) + pow(y[i] - y[i - 1], 2));
        total += s;
    }
    total +=  sqrt(pow(x[0] - x[n-1], 2) + pow(y[0] - y[n-1], 2)); 
    // cout << total << endl;
    total+= 2*3.141592653589793238*r; 
    cout << total << endl ;
return 0;
}