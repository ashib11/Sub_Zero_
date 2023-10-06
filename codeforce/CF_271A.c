#include <stdio.h>
#include <string.h>
int main()
{
    int year;
    scanf("%d", &year);
    while (1)
    {
        int a, b, c, d;
        year+=1; 
        a = year / 1000;
        b = year / 100 % 10;
        c = year / 10 % 10;
        d = year % 10;
        if (a == b || a == c || a == d || b == c || b == d || c == d)
        {
            continue;
        }
        else
        {
            printf("%d\n", year);
            break;
        }
    }

    return 0;
}