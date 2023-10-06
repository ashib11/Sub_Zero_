#include <stdio.h>
int main()
{
    int n, count = 0;
    
    
    while (1)
    {   count = 0; 
        scanf("%d", &n);
        int arr[n + 2];
        if (n == 0)
        {
            break;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {

                scanf("%d", &arr[i]);
            }
            arr[0] = arr[n];
            arr[n + 1] = arr[1];
            for (int i = 1; i <= n; i++)
            {
                if (((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])) || ((arr[i] < arr[i - 1]) && (arr[i] < arr[i + 1])))
                {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }

    return 0;
}