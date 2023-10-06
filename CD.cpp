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
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}
void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; ++i)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}
int main()
{

    cout << "The size of the array: " << endl;
    int sz;
    cin >> sz;
    int arr[sz];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < sz; ++i)
    {
        cin >> arr[i];
    }
    create(arr, 5);
    insert(first, 4, 10);
    display(first);
    return 0;
}