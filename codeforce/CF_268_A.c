#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, arr[1000], count = 0;
    scanf("%d", &test_case);
    for (int i = 0; i < 2 * test_case; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <2* test_case; i+=2)
    {
        for (int j = 1; j < (2 * test_case); j+=2)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
