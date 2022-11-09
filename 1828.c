#include <stdio.h>
#include <string.h>
int main()
{
    int test_case;
    char str1[100], str2[100];
    scanf("%d", &test_case);
    for (int i = 1; i <= test_case; i++)
    {
        scanf("%s %s", str1, str2);
        if (!strcmp(str1, str2))
        {
            printf("Caso #%d: De novo!\n", i);
        }
        else if (!strcmp(str1, "tesoura"))
        {
            if (!strcmp(str2, "papel") || (!strcmp(str2, "lagarto")))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if (!strcmp(str1, "papel"))
        {
            if (!strcmp(str2, "pedra") || (!strcmp(str2, "Spock")))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if (!strcmp(str1, "pedra"))
        {
            if (!strcmp(str2, "lagarto") || (!strcmp(str2, "tesoura")))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if (!strcmp(str1, "lagarto"))
        {
            if (!strcmp(str2, "Spock") || (!strcmp(str2, "papel")))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if (!strcmp(str1, "Spock"))
        {
            if (!strcmp(str2, "tesoura") || (!strcmp(str2, "pedra")))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else
            printf("Caso #%d: Raj trapaceou!\n", i);
    }
    

    return 0;
}