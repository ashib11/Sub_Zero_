#include <stdio.h>
#include <string.h>
int main()
{
    int size, count, num;
    scanf("%d", &size);
    int arr[size + 10];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                count++;
            }
        }
    }
printf("%d\n",count); 
    return 0;
}