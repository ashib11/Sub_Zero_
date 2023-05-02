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

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ": ";
        int a[4];
        char c;
        for (int i = 0; i < 4; ++i)
           cin >> a[i] >> c; 

        int j = 0;
        string str;
        cin >> str;
        string b;
        int k = 0;
        bool flag = false;
        for (int j = 0; j < str.size(); ++j)
        {

            if ((str[j] == '.'))
            {
                if (a[k] != stoi(b, nullptr, 2))
                {
                    flag = true; 
                    break; 
                }
                // cout << stoi(b,nullptr,2) << '.';
                b.clear();
                k++; 
            }
            else
                b += str[j];
            if (j == str.size() - 1)
            {
                // cout << stoi(b,nullptr,2) << endl<<endl;
                
                if (a[k] != stoi(b, nullptr, 2))
                {
                    flag = true; 
                    break; 
                }
            }
        }
        if(!flag) cout << "Yes" << endl; 
        else cout << "No" << endl; 
        // cout << stoi(str, nullptr, 2) << endl;
    }
    return 0;
}