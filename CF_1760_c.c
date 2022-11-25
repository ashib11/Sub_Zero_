#include <stdio.h>
#include <string.h>
int main()
{
    long long int test_case;
    scanf("%lld", &test_case);
    for (int i = 0; i < test_case; i++)
    {

        long long int size, highest = 0, second = 0;
        scanf("%lld", &size);
        long long int arr[size + 10];
        for (int j = 0; j < size; j++)
        {
            scanf("%lld", &arr[j]);
            if (highest < arr[j])
            {
                second = highest;
                highest = arr[j];
            }
            else if (second < arr[j])
            {
                second = arr[j];
            }
        }

        for (int j = 0; j < size; j++)
        {
            if (arr[j] == highest)
            {
                arr[j] = arr[j] - second;
                printf("%lld ", arr[j]);
            }
            else
            {
                arr[j] = arr[j] - highest;
                printf("%lld ", arr[j]);
            }
        }
        printf("\n");
    }

    return 0;
}