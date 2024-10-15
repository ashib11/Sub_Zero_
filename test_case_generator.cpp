#include "bits/stdc++.h"
using namespace std;
const int MAX = 10;
const int mx = 1e9 + 1;
int main()
{
    srand(time(NULL));
    cout << 1 << endl;
    int n = (rand() % MAX + 1)+1;
    int k = (rand() % n)+1;
    cout << n << ' ' << k << endl;
    for (int i = 0; i < k; ++i)
    {
        int val = rand() % 11 - rand() % 11;
        cout << val << ' ' ; 
    }
    cout << endl;
   
}
