#include <iostream>
using namespace std;
int main()
{
    int test_case, n, even, odd;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cin >> n;
        if ((n / 2) % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            printf("YES\n");
            for (int i = 1; i <= n / 2; i++)
                cout << i * 2 << ' ';
            for (int i = 1; i < n / 2; i++)
                cout << i * 2 - 1 << ' ';
            cout << n + n / 2 - 1 << '\n';
            
        }
    }

    return 0;
}