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
    for(auto it = s.begin(); it!=s.end(); ++it){
        cout << *it << endl; 
    }
}
int main()
{
    fastIO();
    set<string> s; 
    s.insert("abc"); 
    s.insert("asdf");
    s.insert("bcd"); 
    auto it = s.find("abc");
    if(it!=s.end()) ; 
    cout << *it << endl; 
    cout << endl; 
    print(s) ; 
    return 0;
}