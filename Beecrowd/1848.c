#include <stdio.h>
#include <string.h>
int main()
{
    char blink[9];
    char calling[3];
    int calling_count = 0, sum = 0;
    char cons[] = "caw caw";
    while (calling_count != 3)
    {
        gets(blink);
        if (!strcmp(blink, cons))
        {
            printf("%d\n", sum);
            sum = 0;
            calling_count++;
        }
        if (blink[0] == '*')
        {
            sum = sum + (4);
        }
        if (blink[1] == '*')
        {
            sum = sum + (2);
        }
        if (blink[2] == '*')
        {
            sum = sum + (1);
        }
    }
    return 0;
}
