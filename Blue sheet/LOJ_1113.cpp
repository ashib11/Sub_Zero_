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
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; ++i)
    {
        cout << "Case " << i << ":\n";
        stack<string> fs, bs;
        fs.push("http://www.lightoj.com/");

        string str, adres;
        while (1)
        {
            cin >> str;
            // BACK FORWARD VISIT QUIT
            if (str == "VISIT")
            {
                cin >> adres;

                if (fs.empty())
                    cout << "Ignored" << endl;
                else
                {
                    bs.push(fs.top());
                    fs.pop();
                    while (!fs.empty())
                        fs.pop();
                    fs.push(adres);
                }
                cout << fs.top() << endl;
            }
            else if (str == "FORWARD")
            {
                if (fs.size() < 2)
                    cout << "Ignored" << endl;
                else
                {
                    bs.push(fs.top());
                    fs.pop();
                    cout << fs.top() << endl;
                }
            }
            else if (str == "BACK")
            {
                if (bs.empty())
                    cout << "Ignored" << endl;
                else
                {
                    fs.push(bs.top());
                    bs.pop();
                    cout << fs.top() << endl;
                }
            }
            else break; 
        }
    }
    return 0;
}