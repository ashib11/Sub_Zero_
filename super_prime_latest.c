#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    while ((scanf("%d", &num) != EOF))
    {
        int count = 0, prime_couter = 0, last_digit;

        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break; 
            }
        }
        if ((count != 0) || (num == 1))
            printf("Nada\n");

        else
        {
            while ((num != 0))
            {
                last_digit = num % 10;
                num = num / 10;

                if (last_digit == 0 || last_digit == 1 || last_digit == 4 || last_digit == 6 || last_digit == 8 || last_digit == 9)
                {
                    printf("Primo\n");
                    prime_couter++;
                    break; 
                }
            }

            if (prime_couter==0)
            {
                printf("Super\n"); 
            }
            
        }
    }

    return 0;
}