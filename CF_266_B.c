#include <stdio.h>
#include <string.h>
int main()
{
    int size, value, temp;
    scanf("%d %d", &size, &value);
    getchar();
    char str[size];
    fgets(str, 100, stdin);

    for (int j = 0; j < value; j++)
    {

        for (int i = 0; i < size; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G' && i != (size - 1))
            {
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
                i++; 
            }
        }
    }

    printf("%s\n", str);
    return 0;
}