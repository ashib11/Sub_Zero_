#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void mrint(unordered_map<int, string> &m)
{
    cout << "size " << m.size() << endl;
    for (auto &pm : m)
    {
        cout << pm.first << " " << pm.second << endl;
    }
}
int main()
{
    fastIO();
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    mrint(m); 
    auto it = m.find(3) ; // O(log(n)) 
    if(it!=m.end())
    m.erase(it); 
    // if(it == m.end()) cout <<"NO VALUE\n" ; 
    // else cout << it->first << " " << it->second << endl; 
    mrint(m); 
    return 0;
}