#include "bits/stdc++.h"
using namespace std;
const int MAX = 10;
const int mx = 1e9+1; 
int main()
{
	srand(time(NULL));
    cout << 1 << endl; 
	int n = rand() % MAX + 1;
	int m = rand() % MAX + 1;
	cout << n << endl;

	for (int i = 0; i < n; ++i)
	{
		int val = rand()%mx; 
        cout << val << ' ';
	}
}
