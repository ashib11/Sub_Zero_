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
    string a; 
    cin >> a; 
    int cnt =0; 
    for(int i =0 ; i < (int)(a.size()); ++i){
    	if(a[i]=='Q'){
    		for(int j = i+1 ; j < a.size(); ++j){
    			if(a[j]=='A'){
    				for(int k = j+1; k< a.size(); ++k){
    						if(a[k]=='Q'){
    							cnt++; 
    						}
    				}
    			}
    		}
    	}
    }
    cout << cnt << endl; 
    return 0;
}