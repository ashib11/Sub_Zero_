#include <stdio.h>
#include <string.h>

int main()
{
    char first[200], second[200], third[200];
    gets(first); 
    gets(second); 
    gets(third); 

    printf("%s%s%s\n", first, second, third);
    printf("%s%s%s\n", second, third, first);
    printf("%s%s%s\n", third, first, second);
    printf("%.10s%.10s%.10s\n", first, second, third);
    return 0;
}

