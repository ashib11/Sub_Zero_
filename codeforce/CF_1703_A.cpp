#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        string a;
        cin >> a;
        if ((a[0] == 'Y' || a[0] == 'y') && (a[1] == 'E' || a[1] == 'e') && (a[2] == 'S' || a[2] == 's')){
            cout << "YES\n"; 
        }
        else cout << "NO\n"; 
    }

    return 0;
}