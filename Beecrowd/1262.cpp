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
    string s; 
    int n; 
    while(cin >> s >> n) {
        int cycle =0; 
        for(int i=0; i<s.length();) {
            if(s[i]=='W'){
                cycle ++;
                i++;   
            }
            else{
                int check =0; 
                while(check<n && s[i] == 'R'){
                    check++;
                    i++;  
                }
                cycle++; 
            }
        }
        cout << cycle << endl; 
    }
    return 0;
}