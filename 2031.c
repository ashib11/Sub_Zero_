#include <stdio.h>
#include <string.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    getchar();
    char p1[1000], p2[1000];
    for (int i = 0; i < test_case; i++)
    {
        gets(p1);
        gets(p2);

        if ((p1[1] == 't') && (p2[1] != 't'))
        {
            printf("Jogador 1 venceu\n");
        }
        else if ((p2[1] == 't') && (p1[1] != 't'))
        {
            printf("Jogador 2 venceu\n");
        }
        else if ((p2[1] == 't') && (p1[1] == 't'))
            printf("Aniquilacao mutua\n");
        else if ((p1[1] == 'e') && (p2[1] != 'e'))
        {
            printf("Jogador 1 venceu\n");
        }
        else if ((p2[1] == 'e') && (p1[1] != 'e'))
        {
            printf("Jogador 2 venceu\n");
        }
        else if ((p2[1] == 'e') && (p1[1] == 'e'))
            printf("Sem ganhador\n");

        else if (p2[1] == 'a' && p1[1] == 'a')
            printf("Ambos venceram\n");
    }

    return 0;
}