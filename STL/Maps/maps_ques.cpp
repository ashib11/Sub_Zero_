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
    map <string, int > m; 
    int n; 
    cin >> n; 
    for(int i=0; i<n; ++i ) {
        string s; 
        cin >> s; 
        // m[s] = m[s] +1; 
        m[s]++; 
    }
    for(auto pr:m){
        cout << pr.first << " " << pr.second << endl; 
    }
    return 0;
}