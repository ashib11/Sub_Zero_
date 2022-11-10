#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[2000];
    char small[] = "abcdefghijklmnopqrstuvwxyz";
    char big[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char num[] = "1234567890";
    // char punc[] = ";,?:''!.-_(){}[]//";
    int len, smoll, bg, nm, sp, space, size;
    while (gets(str))
    {
        smoll = 0, bg = 0, nm = 0, sp = 0, space = 0, size = 0;
        len = strlen(str) ;

        for (int i = 0; i < len; i++)
        {
            if (str[i] == ' ')
            {
                space = 1;
            }
            if ((ispunct(str[i])))
            {

                sp = 1;
            }

            if ((len > 32) || (len < 6))
            {
                size = 1;
            }
            for (int j = 0; j < 26; j++)
            {
                if (str[i] == small[j])
                {
                    smoll = 1;
                }
                if (str[i] == big[j])
                {
                    bg = 1;
                }
            }
            for (int j = 0; j < 10; j++)
            {
                if (str[i] == num[j])
                {
                    nm = 1;
                }
            }
        }
        if (smoll == 0 || bg == 0 || nm == 0 || sp == 1 || size == 1 || space == 1)
        {
            printf("Senha invalida.\n");
        }
        else
            printf("Senha valida.\n");
    }
    return 0;
}