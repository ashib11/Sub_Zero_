#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, anton = 0, danik = 0;
    char c;
    scanf("%d", &test_case);
    getchar(); 
    for (int i = 0; i < test_case; i++)
    {
        scanf("%c", &c);
        if (c == 'A')
        {
            anton += 1;
        }
         if (c == 'D')
        {
            danik += 1;
        }
    }
    if (anton == danik)
    {
        printf("Friendship\n");
    }
    
    else if (anton>danik)
    {
        printf("Anton\n");
    }
    else printf("Danik\n"); 
    return 0;
}