#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *prev; // ekhane add hoise new
    struct Node *next;
} *first = NULL;
void create(int arr[], int n)
{

    struct Node *t, *last;
    first = new Node;
    first->data = arr[0];
    first->prev = NULL; // ekhane ek line
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; ++i)
    {
        t = new Node;
        t->data = arr[i];
        t->prev = last; // ekhane ek line change
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
    t->prev = NULL; // change
    t->next = NULL; // change

    if (index == 0)
    {
        t->next = first;
        if (first) // change
            first->prev = t;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; ++i)
            p = p->next;
        t->next = p->next;
        if (p->next)
            p->next = t;
        p->next = t;
        t->prev = p; // change
    }
}
int main()
{

    int arr[] = {3, 5, 7, 10, 15};
    create(arr, 5);
    insert(first, 4, 10);
    display(first);
    return 0;
}