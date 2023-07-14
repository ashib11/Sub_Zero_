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
int QAQ(string str, int n)
{
    if (n >= str.size() - 2)
        return 0;
    int cnt = 0;
    if (str[n] == 'Q' ){
        cnt++;
        QAQ(str, n+1); 
        }
    return cnt + QAQ(str, n + 1);
}
int main()
{
    fastIO();
    string a;
    cin >> a;
    int cnt = QAQ(a, 0);
    cout << cnt << endl;
    return 0;
}