#include<stdio.h>
int main(){
int num,d,m,y; 
scanf("%d",&num); 
for (int  i = 0; i < num; i++)
{
    y = num / 365; 
    m = (num-y*365)/30; 
    d = num -(y*365)-(m*30); 
}
printf("%d ano (s)\n%d mes (es)\n%d dia (s)\n",y,m,d); 
 
return 0;
}