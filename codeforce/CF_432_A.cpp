#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = 5 - arr[i];
    }
    int count, team = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= k)
        {
            arr[j]--;
            count++;
        }
        if (count == 3)
        {
            count = 0;
            team++;
        }
    }

    cout << team << endl;
    return 0;
}