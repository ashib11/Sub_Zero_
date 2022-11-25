#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, entry, exit, total = 0, highest = 0;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d %d", &exit, &entry);
        total = total + (entry - exit);

        if (highest < total)
        {
            highest = total;
        }
    }
    printf("%d\n", highest);
    return 0;
}