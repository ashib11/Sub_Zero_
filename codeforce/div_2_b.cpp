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

//upsolve 
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while(tc--){

    	int n,x; cin >> n >> x; 
    	int arr[3][n]; 
    	for(int i =0 ; i < 3 ; ++i){
    		for(int j =0 ; j < n; ++j){
    			cin >> arr[i][j]; 
    		}
    	}
    	int ans =0; 
    	for(int i =0 ; i < 3 ; ++i){
    		int cmp =0; 
    		for(int j =0 ; j < n; ++j){
    			cmp |= arr[i][j]; 
    			if((x|cmp)> x ) break; 
    			ans |=cmp; 
    		}
    	}
    	if(ans == x){
    		cout << "Yes" << endl; 
    	}
    	else cout << "No" << endl; 
    }
    return 0;
}