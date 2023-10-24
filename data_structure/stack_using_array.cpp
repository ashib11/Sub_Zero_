#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    unsigned mx_size;
    int *arry;
};
struct Stack *create(unsigned size)
{
    struct Stack *stack = new Stack;
    stack->mx_size = size;
    stack->top = -1;
    stack->arry = new int[stack->mx_size];
    return stack;
}
int 
int main()
{
    return 0;
}