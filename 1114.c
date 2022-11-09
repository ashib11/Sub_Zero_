#include <stdio.h>
int main()
{
    int number, password = 2002;
    while (1)
    {
        scanf("%d", &number);
        if (number == password)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n"); 
        }
    }

    return 0;
}