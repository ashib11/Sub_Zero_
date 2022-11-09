    #include <stdio.h>
    int main()
    {
        int n, x, y, sum = 0, count = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
             sum = 0 ; 
            scanf("%d %d", &x, &y);
            for (int i = x;; i++)
            {
                if (count == y)
                {
                    count = 0; 
                    break;
                    
                    
     
                }
                else if (i % 2 != 0)
                {
                    sum = sum + i;
                    count++;
                }
            }
            printf("%d\n", sum);
        }
        return 0;
    }