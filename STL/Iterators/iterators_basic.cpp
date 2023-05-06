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
    vector<int> v = {2, 3, 4, 5, 6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it = v.begin();
    // cout << *it << endl;
    // cout << *(it+1) << endl;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << endl;
    }
    vector<pair<int, int>> v_p = {{1, 3}, {2, 4}};
    vector<pair<int, int>>::iterator it_p;
    for (it_p = v_p.begin(); it_p != v_p.end(); ++it_p)
    {
        cout << (*it_p).first << " " << (*it_p).second << endl;
    }
    for (it_p = v_p.begin(); it_p != v_p.end(); ++it_p)
    {
        cout << it_p->first << " " <<it_p->second  << endl;
    }
    return 0;
}