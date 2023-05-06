#include <iostream>
#include <vector>
using namespace std;

void find_subsequences(vector<int> &A, int M, int current_sum, vector<int> &current_seq)
{
    if (current_sum == M)
    {
        for (int i : current_seq)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    if (A.empty())
    {
        return;
    }
    int element = A.back();
    A.pop_back();
    find_subsequences(A, M, current_sum, current_seq);
    current_sum += element;
    current_seq.push_back(element);
    find_subsequences(A, M, current_sum, current_seq);
    A.push_back(element);
    current_seq.pop_back();
}

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int N,M; 
        cin >> N >> M; 
        vector<int> A ;
        int M = 7;
        vector<int> current_seq;
        
        find_subsequences(A, M, 0, current_seq);
    }

    return 0;
}
