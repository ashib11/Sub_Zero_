#include <bits/stdc++.h>
using namespace std;


int main()
{
    string a = "Tumir"; 
    sort(a.begin(), a.end()); 
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size, sum = 0;
        cin >> size;
        string b; 
        cin >> b; 
        sort(b.begin(), b.end()); 
        b==a? cout << "YES\n" : cout << "NO\n"; 
    }

    return 0;
}
