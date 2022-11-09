#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    while (1)
    {
        int count = 0, length;
        gets(str);
        length = strlen(str);
        if (str[0] == '0')
        {
            break;
        }
        for (int i = 0; i < length; i++)
        {
            if (str[i] != ' ')
            {
                count++;
            }

            if ((str[i] == ' ') || (i == length - 1))
            {

                printf("%d", count);
                count = 0;
                if (i == length - 1)
                {
                    break;
                }

                printf("-");
            }
        }
        printf("\n"); 
    }

    return 0;
}