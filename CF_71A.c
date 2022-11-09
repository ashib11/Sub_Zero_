#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, size;
    scanf("%d", &test_case);
    char word[test_case][104];

    for (int i = 0; i < test_case; i++)
    {
        scanf("%s", word[i]);
        size = strlen(word[i]);
        if (size > 10)
        {
            printf("%c%d%c\n", word[i][0], (size - 2), word[i][size - 1]);
        }
        else
            printf("%s\n", word[i]);
    }

    return 0;
}