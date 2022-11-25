#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];

    while (fgets(str,30,stdin))
    {
        int test_case;
        scanf("%d", &test_case);

        for (int i = 0; i < test_case; i++)
        {
            int n;
            scanf("%d", &n);
            getchar(); 
            printf("%c", str[n - 1]);
        }
        printf("\n");
    }

    return 0;
}