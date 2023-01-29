#include <iostream>
using namespace std;

int main()
{
	int d, l, r, t;
	cin >> d;
	for (int i = 0; i < d; i++)
	{
		cin >> l >> r >> t;
		if (l >= r && l <= t)
		{
			cout << "Take second dose now\n";
		}
		else if (l > t)
			cout << "Too Late\n";
		else
			cout << "Too Early\n";
	}
	return 0;
}
