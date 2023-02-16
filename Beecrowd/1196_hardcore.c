#include <stdio.h>
#include <string.h>
int main()
{
    int arr[3], copy[3], num;

    for (int i = 0; i < 3; i++)
    {

        scanf("%d", &arr[i]);
        copy[i] = arr[i]; 

    }
    int temp;
    for (int i = 0; i < 3; i++)
    {

        for (int j = i + 1; j < 3; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n"); 
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", copy[i]);
    }
    return 0;
}