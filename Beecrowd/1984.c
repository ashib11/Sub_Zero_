#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, temp, length;
    char str[100];
    scanf("%s", str);
    length = strlen(str);
    for (int i = 0, j = length - 1; i < (length / 2); i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s\n", str); 
    return 0;
}