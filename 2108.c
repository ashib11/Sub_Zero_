#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    char max[500];
    int highest = 0;
    while (1)
    {
        int count = 0, length;
        char B_word[1000], temp[1000];
        gets(str);
        length = strlen(str);
        if (str[0] == '0')

        {
            printf("\n"); 
            printf("The biggest word: %s\n", B_word);
            break;
        }
        int j = 0;
        for (int i = 0; i < length; i++)
        {

            if (str[i] != ' ')
            {
                temp[j] = str[i];
                count++;
            }
            j++;
            if ((str[i] == ' ') || (i == length - 1))
            {
                temp[count] = '\0';
                if (count >= highest)
                {
                    highest = count;
                    strcpy(B_word, temp);
                }

                printf("%d", count);
                count = 0;
                j = 0;
                if (i == length - 1)
                {
                    break;
                }

                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}