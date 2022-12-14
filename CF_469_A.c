#include <stdio.h>
#include <string.h>
int main()
{
    int level, tc1, tc2;
    scanf("%d", &level);
    scanf("%d", &tc1);
    int arr[level + 10];
    int num, sum = 0, h1 = 0, h2 = 0;
    for (int i = 0; i < tc1; i++)
    {
        scanf("%d", &num);
        arr[num - 1] = 1;
    }
    scanf("%d", &tc2);
    for (int i = 0; i < tc2; i++)
    {
        scanf("%d", &num);
        arr[num - 1] = 1;
    }
    for (int i = 0; i < level; i++)
    {
        sum += arr[i];
    }
    if (sum ==level)

        printf("I become the guy.\n");

    else
        printf("Oh, my keyboard!\n");

    return 0;
}