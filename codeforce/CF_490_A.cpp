#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, pro = 0, math = 0, PE = 0;
    cin >> size;
    int arr[size], team, pos1[size], pos2[size], pos3[size];
    int j = 0, k = 0, l = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            pos1[j] = i;
            j++;
            pro++;
        }
        else if (arr[i] == 2)
        {
            pos2[k] = i;
            k++;
            math++;
        }
        else
        {
            pos3[l] = i;
            l++;
            PE++;
        }
    }
    team = min(min(pro, math), PE);
    if (team == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << team << endl;
        for (int i = 0; i < team; i++)
        {
            cout << pos1[i]+1 << " " << pos2[i]+1 << " " << pos3[i]+1 << endl;
        }
    }
    return 0;
}