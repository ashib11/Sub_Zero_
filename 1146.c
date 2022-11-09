#include<stdio.h>
int main(){
int x; 

while (1)
{
    scanf("%d",&x); 
    if (x==0)
    {
       break; 
    }
    
    else{
        for (int i = 1; i <= x; i++)
        {
            printf("%d",i); 
            if (i != x)
            {
                printf(" "); 
            }
            
        }
        printf("\n"); 
    } 
}



return 0;
}