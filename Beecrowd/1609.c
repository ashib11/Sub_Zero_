#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int array[10000];
int main()
{
    memset(array, 0, sizeof array);
    int TC, n, i, j, temp;
    scanf("%d", &TC);

    while (TC--)
    {
        int temp = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]); 
            temp++;
        }
        int t = 0;
        for (i = 0; i < n; i++)
        {
            t = array[i]; 
            for (j = i + 1; j < n; j++)
            {
                if (t == array[j])
                {
                    temp = temp - 1;
                    break;
                }
            }
        }

        printf("%d\n", temp);
    }

    return 0;
}
