#include <iostream>
using namespace std;
long long int arr[1000000] = {0};
long long int realDeal[1000000];
void prime()
{
    for (long long int i = 4; i < 1000000; i += 2)
    {
        arr[i] = 1;
    }

    for (long long int i = 3; i < 1000000; i += 2)
    {
        if (arr[i] == 0)
        {
            for (long long int j = (i * i); j < 1000000; j += (2 * i))
            {
                arr[j] = 1;
            }
        }
    }
    long long int k = 0;
    for (long long int i = 2; i < 1000000; i++)
    {
        if (arr[i] == 0)
        {
            realDeal[k] = i;
            k++;
        }
    }
}
// void fastIO()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }
int main()
{
    // fastIO();
    prime();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        cout << realDeal[n - 1] << "\n";
    }

    return 0;
}