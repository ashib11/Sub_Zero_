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

    int n;
    while (cin >> n)
    {
        string sentence;
        for (int i = 0; i < n; i++)
        {
            string b;
            cin >> b;
            char c = stoi(b, nullptr, 2);
            sentence += c;
        }
        cout << sentence << endl;
    }
    return 0;
}