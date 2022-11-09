#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n", str);
    printf("<%30s>\n",str);
    printf("<%.20s>\n", str);
    printf("<%-20s>\n", str);
    printf("<%-30s>\n", str);
    printf("<%.30s>\n", str);
    printf("<%30.20s>\n", str);
    printf("<%-30.20s>\n", str);
    return 0;
}