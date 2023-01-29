#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  int arr[tc];
  int sum = 0, count = 0;
  for (int i = 0; i < tc; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  sort(arr, arr + tc);
  int newSum = 0;
  sum = sum / 2;
  for (int i = tc - 1; i >= 0; i--)
  {

    newSum += arr[i];
    count++;
    if (newSum > sum)
      break;
  }

  cout << count << endl;
  return 0;
}