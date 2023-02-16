#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char str[20];
    int team, match, num, sum = 0;

    while (1)
    {
        scanf("%d %d", &team, &match); 
       
        if (team == 0)
        {
            break;
        }
        printf("%d %d\n",team,match); 
        for (int i = 0; i < match; i++)
        {
            scanf("%s %d", str, &num);
            getchar(); 
            sum += num;
        }
        printf("%d\n", (sum%team)); 
    }

    return 0;
}