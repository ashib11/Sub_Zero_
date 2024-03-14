#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    deque<int> x(N + 1), y(N + 1);

    for (int i = 1; i <= N; ++i) {
        x[i] = i;
        y[i] = 0;
    }

    for (int i = 0; i < Q; ++i) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            char direction;
            cin >> direction;

            if (direction == 'R') {
                x.push_front(x.front() + 1);
            } else if (direction == 'L') {
                x.push_front(x.front() - 1);
            } else if (direction == 'U') {
                y.push_front(y.front() + 1);
            } else if (direction == 'D') {
                y.push_front(y.front() - 1);
            }

            x.pop_back();
            y.pop_back();
        } else {
            int p;
            cin >> p;
            cout << x[p] << " " << y[p] << endl;
        }
    }

    return 0;
}
