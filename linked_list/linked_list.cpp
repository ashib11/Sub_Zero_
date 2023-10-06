#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int arr[], int n)
{

    struct Node *t, *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; ++i) 
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node *p)
{ // recursive
    if (p != NULL)
    {
        cout << p->data << " ";
        display(p->next);
    }
}
// void display(struct Node *p)
// {
//     while (p)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }
int main()
{

    int arr[] = {3, 5, 7, 10, 15};
    create(arr, 5);
    display(first);

    return 0;
}