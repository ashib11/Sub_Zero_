#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        if ((str[i] == '-') && (str[i + 1] == '.'))
        {
            cout << '1';
            i++; 
        }
        else if ((str[i] == '-') && ((str[i + 1] == '-')) && i != size - 1)
        {
            cout << '2';
            i++; 
        }
        else if ((str[i] == '.') )
        {
            cout << '0';
        }
    }

    return 0;
}

//. -. --