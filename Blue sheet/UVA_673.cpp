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
#define point(x, d) fixed << setprecision(d) << x

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int test_case;
    cin >> test_case;
    cin.ignore();
    bool flag;
    while (test_case--)
    {
        string s;
        flag = true;
        getline(cin, s);
        vector<char> v;
        v.clear();
        for (int i = 0; i < s.size(); ++i)
        {
            if((s[i]== ']' || s[i]==')')&& v.size()==0){
                flag = false; 
                break; 
            }
            else if (s[i] == '(' || s[i] == '[')
            {
                v.push_back(s[i]);
            }
            else if (s[i] == ')' && v.back() == '(')
            {
                v.pop_back();
            }
            else if (s[i] == ']' && v.back() == '[')
            {
                v.pop_back();
            }
            else
                flag = false;
        }
        if (v.size() != 0)
            flag = false;
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
