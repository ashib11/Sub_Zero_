#include <stdio.h>
int main()
{
    int n, x, count = 1, temp;
    scanf("%d", &n);
    int arr[20000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                i++;
            }
            else
            {

                printf("%d aparece %d vez(es)\n", arr[i], count);
                count = 1;
                i++;
            }
        }
    }

    return 0;
}