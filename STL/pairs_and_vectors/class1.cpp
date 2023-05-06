#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void printV(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    fastIO();
    // pair<int, string > p;
    // // p = make_pair(2, "abc") ;
    // p = {2,"abc"};
    // cout << p.first << " " << p.second << endl;
    // pair<int , string > &p1 = p;
    // p1.first = 5;
    // cout << p.first << " " << p.second << endl;
    // int a[] = {1,2,3};
    // int b[] = {4,5,6};
    // pair<int ,int > p_arry[3];
    // p_arry[0] = {1,4};
    // p_arry[1] = {2,5} ;
    // p_arry[2] = {3,6} ;
    // swap(p_arry[0],p_arry[2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p_arry[i].first << " " << p_arry[i].second << endl;
    // }

    vector<int> v(1,3);
    int siz;
    cin >> siz;
    // for (size_t i = 0; i < siz; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    v.push_back(5); 
    printV(v); 
    v.pop_back();    
    printV(v) ; 
     cout << "\n" ;
    vector<int> v2 = v; //O(n)
   
    v2.push_back(8); 
    printV(v2) ; 
    return 0;
}