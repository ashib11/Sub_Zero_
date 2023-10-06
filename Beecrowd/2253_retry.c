#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[5000];
    int len, small, big, num, garb;
    while (gets(str))
    {
        small = 0, big = 0, num = 0;
        len = strlen(str);

        if (len < 6 || len > 32)
        {
            printf("Senha invalida.\n");
        }
        else
        {
            garb = 1;
            for (int i = 0; i < len; i++)
            {

                if (str[i] >= 97 && str[i] <= 122)
                {
                    small = 1;
                }
                else if (str[i] >= 65 && str[i] <= 90)
                {
                    big = 1;
                }
                else if (str[i] >= 48 && str[i] <= 57)
                {
                    num = 1;
                }
                else
                {
                    garb = 0;
                    break;
                }
            }
            if (small && big && num && garb)
            {
                printf("Senha valida.\n");
            }
            else
                printf("Senha invalida.\n");
        }
    }

    return 0;
}