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
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};
    string isBalanced(string s)
    {
        stack<char> st;
        for (char bracket : s)
        {
            if (symbols[bracket] < 0)
            {
                st.push(bracket);
            }
            else
            {
                if (st.empty())
                    return "NO";
                char top = st.top();
                st.pop();
                if (symbols[top] + symbols[bracket] != 0)
                    return "NO";
            }
        }
    }
    
    return 0;
}