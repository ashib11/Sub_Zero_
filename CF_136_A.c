#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size + 10];
    int num;
    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &num);
        arr[num] = i;
    }

    for (int i = 1; i <= size; i++)
    {
        printf("%d ",arr[i]); 
    }
    printf("\n");
    return 0;
}