#include<stdio.h>
int main(){
    float i,j; 
float sum=0; 
for (i = 1,j=1; i <=39; i=i+2,j=j*2)
{
    sum = sum + (i/j); 
}
printf("%.2f\n",sum); 
return 0;
}