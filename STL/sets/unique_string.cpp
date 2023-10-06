#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void print(set<string> &s){
    for(string value : s) {
        cout << value << endl; 
    }
}
int main()
{
    fastIO();
    int N; 
    cin >> N; 
    set<string> s; 
   for(int i=0; i<N; ++i)
    {
       string x; 
       cin >> x; 
        s.insert(x) ; 
    }
    print(s) ; 
    return 0;
}