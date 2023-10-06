#include <stdio.h>
 
int main()
{
    int n, i, j, count;
 
    scanf("%d", &n);
 
    int arr[n];
 
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
 
    if(n == 1)
    {
        printf("0");
        return 0;
    }
 
    if(arr[0] == arr[1])
        count = 0;
    else
        count = 1;
 
    for(i = 2; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(arr[j] < arr[i])
                continue;
            else
                break;
        }
 
        if(j == i)
            count++;
    }
 
    for(i = 2; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(arr[j] > arr[i])
                continue;
            else
                break;
        }
 
        if(j == i)
            count++;
    }
 
    printf("%d", count);
 
    return 0;
}