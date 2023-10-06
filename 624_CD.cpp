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
vector<int> ans, L;
int Mn = 1e9 + 10;
void func(int index, int remainin, vector<int> &v)
{
    if (index < 0)
    {
        if (Mn > remainin)
        {
            Mn = remainin;
            L = ans;
        }
        return;
    }

    func(index - 1, remainin, v);
    if (remainin - v[index] >= 0)
    {
        ans.push_back(v[index]);
        func(index - 1, remainin - v[index], v);
        ans.pop_back();
    }
}
int main()
{
    fastIO();
    int n, q;
    while (cin >> n >> q)
    {
        vector<int> v(q);
        for (int i = 0; i < q; ++i)
        {
            cin >> v[i];
        }
        func(q - 1, n, v);
        cout << Mn << endl; 
        ll sum = 0;
        for (int i = L.size() - 1; i >= 0; --i)
        {
            cout << L[i] << " ";
            sum += L[i];
        }
        cout << "sum:" << sum << endl;
        ans.clear();
        L.clear();
        Mn = 1e9+10; 
    }
    return 0;
}