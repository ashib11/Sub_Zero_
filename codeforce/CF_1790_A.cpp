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
    string a = "314159265358979323846264338327";
    int tc;
    cin >> tc;
    while (tc--)
    {
        string x;
        cin >> x;
        int count = 0;
        
            for (int j = 0; j < a.size(); j++)
            {
                if (x[j] == a[j])
                    count++;
                else break; 
            }
        cout << count << endl;
    }
    return 0;
}