#include<stdio.h>
int main(){
int number,out=0; 
float food; 
scanf("%d",&number); 
for (int i = 1; i <= number; i++)
{
   scanf("%f",&food); 
   out =  0 ; 
 while (food>1)
 {
     food = food/2; 
     out++; 
     
 }
 printf("%d dias\n",out);
 
}
 


return 0;
}