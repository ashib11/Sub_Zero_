#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, cities, n;
    scanf("%d", &test_case);
    int arr[10000];
    int test[10000];
    int temp;
    for (int k = 0; k < test_case; k++)
    {
        int count = 0, highest = 0;
        scanf("%d", &cities);
        memset(test, 0, sizeof(test));
        for (int i = 0; i < (2 * cities); i++)
        {
            scanf("%d", &arr[i]);
        }
        // for (int i = 0; i < (2 * cities); i++)
        // {
        //     for (int j = i + 1; j < (2 * cities); j++)
        //     {
        //         if (arr[i] > arr[j])
        //         {
        //             temp = arr[i];
        //             arr[i] = arr[j];
        //             arr[j] = temp;
        //         }
        //     }
        // }
        for (int i = 0; i < (2 * cities); i++)
        {
            for (int j = 0; j < (2 * cities); j++)
            {
                if (arr[i] == arr[j])
                {
                    test[i] += 1;
                }
            }
            if (highest < test[i])
            {
                highest = test[i];
                // printf("higest %d\n", highest);
            }
        }

        if (2 < highest)
        {
            printf("No\n");
        }
        else
            printf("Yes\n");
    }

    return 0;
}