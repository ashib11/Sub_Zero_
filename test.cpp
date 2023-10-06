#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<char> bookStack;
    map<char, int> bookIndex;

    // Initialize the book stack and book index.
    for (char c = 'A'; c < 'A' + n; c++) {
        bookStack.push(c);
        bookIndex[c] = c - 'A';
    }

    int q;
    cin >> q;

    int totalOperations = 0;
    for (int i = 0; i < q; i++) {
        char query;
        cin >> query;

        int operations = bookIndex[query] - bookIndex[bookStack.front()];

        // Move books from the front of the stack to the back until the queried book is at the front.
        while (bookStack.front() != query) {
            char frontBook = bookStack.front();
            bookStack.pop();
            bookStack.push(frontBook);
        }

        totalOperations += operations;

        // Print the number of operations and the current stack.
        cout << totalOperations << endl;
        while (!bookStack.empty()) {
            cout << bookStack.front() << " ";
            bookStack.pop();
        }
        cout << endl;
    }

    return 0;
}
