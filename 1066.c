#include<stdio.h>
int main(){
    int x,even=0,odd=0,positive=0,negative=0;
    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&x); 
       if ((x%2)==0)
       {
        even = even +1; 
       }
       if (x>0)
       {
       positive = positive +1; 
       }
       if (x<0)
       {
       negative = negative + 1; 
       }
       if (x%2!=0)
       {
        odd = odd + 1; 
       }
       
    }
   printf("%d valor(es) par(es)\n",even); 
   printf("%d valor(es) impar(es)\n",odd); 
   printf("%d valor(es) positivo(s)\n",positive); 
   printf("%d valor(es) negativo(s)\n",negative); 

return 0;
}