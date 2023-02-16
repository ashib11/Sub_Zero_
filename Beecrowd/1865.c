#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int number, test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        getchar();
        scanf("%s %d", name, &number);
        if (!strcmp(name, "Thor"))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}