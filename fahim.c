#include <stdio.h>
#include <string.h>
int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    for (int i = n + 1;; i++)
    {
        int last_digit;
        if (flag == 1)
        {
            break;
        }
        last_digit = n / 10;
        n %= 10;
    }

    return 0;
}