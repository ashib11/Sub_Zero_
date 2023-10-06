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
    int n, v;
    while (cin >> n >> v)
    {
        if (n == 0 && v == 0)
            break;
        int check = 0;

        int sum = 0;
        while (1)
        {
            for (int i = v; i > 0; i--)
            {
                for (int j = i; j > 0; j--)
                {
                    sum += i;
                    if (sum == n)
                    {
                        check = 1;
                        break;
                    }
                }
            }
           
            if (v == 0)
                break;
            if (check == 1)
                break;
             v--;
            sum= 0;

        }
            if (check)
            {
                cout << "possivel" << endl;
            }
            else
                cout << "impossivel" << endl;
        }

        return 0;
    }