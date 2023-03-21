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
    while (cin >> n && n!=EOF)
    {
        int arr[100] = {0}, brr[100] = {0};
        string str;
        int size;
        for (int i = 0; i < n; i++)
        {
            cin >> size >> str;
            if (str[0] == 'D')
            {
                arr[size]++;
            }
            else if (str[0] == 'E')
                brr[size]++;
        }
        int count =0; 
        for (int i = 30; i < 61; i++)
        {
            if(arr[i]>brr[i]) 
                count+=brr[i] ; 
            else count+=arr[i]; 
        }
        cout << count<< "\n"; 
        
    }

    return 0;
}