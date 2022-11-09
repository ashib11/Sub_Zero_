#include <stdio.h>
int main()
{
    int n_citizen, n_querry,temp=0;
    while (scanf("%d %d", &n_citizen, &n_querry) != EOF)
    {
        int gpa[n_citizen], position;
        for (int i = 0; i < n_citizen; i++)
        {
            scanf("%d", &gpa[i]);
        }
        temp=0;
        for (int i = 0; i < n_citizen; i++)
        {
            for (int j = 1+i; j < n_citizen; j++)
            {
                if (gpa[i]<gpa[j])
                {
                    temp = gpa[i];
                    gpa[i] = gpa[j]; 
                    gpa[j] = temp; 
                }
                
            }
            
        }
        
        for (int i = 0; i < n_querry; i++)
        {
           scanf("%d",&position); 
           printf("%d\n",gpa[position-1]); 
        }
       
        
    }

    return 0;
}