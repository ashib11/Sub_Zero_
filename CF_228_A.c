#include <stdio.h>
#include <string.h>
int main()
{
    int arr[10], temp;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}