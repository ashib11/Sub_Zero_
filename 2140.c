#include<stdio.h>
int main(){
int mrp,paid,left,notes; 
int arr[6] = {2,5,10,20,50,100}; 
while (1)
{
    scanf("%d %d",&mrp,&paid); 
    if ((mrp==0)&&(paid)==0)
    {
        return 0; 
    }
   
    
    else{
        left = paid - mrp; 
        if (left<7)
        {
            printf("impossible\n");
            continue;
        }
        
        for (int i = 5; i > -1; i--)
        {
            notes = left / arr[i]; 
            if (notes>1)
            {
                notes = 1; 
            }
            
            left = left - arr[i]*notes; 
            // printf("%d\n",left); 
        }
        
        if (left ==0)
        {
            printf("possible\n");
        }
        else if (left !=0)
        {
            printf("impossible\n");
        }
        
        
    }
}

return 0;
}