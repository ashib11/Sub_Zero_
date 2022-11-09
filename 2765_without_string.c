#include <stdio.h>

int main()
{
    char c;

    for(;;)
    {
        scanf("%c", &c);

        if(c == '\n')
        {
            printf("\n");
            return 0;
        }

        if(c == ',')
            c = '\n';

        printf("%c", c);
    }
}