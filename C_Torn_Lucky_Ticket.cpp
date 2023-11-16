#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isLucky(string s) {
  if (s.length() % 2 != 0) {
    return false;
  }

  int firstHalfSum = 0;
  for (int i = 0; i < s.length() / 2; i++) {
    firstHalfSum += s[i] - '0';
  }

  int secondHalfSum = 0;
  for (int i = s.length() / 2; i < s.length(); i++) {
    secondHalfSum += s[i] - '0';
  }

  return firstHalfSum == secondHalfSum;
}

int main() {
  int n;
  cin >> n;

  vector<string> tickets;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    tickets.push_back(s);
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      string newTicket = tickets[i] + tickets[j];
      if (isLucky(newTicket)) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}
