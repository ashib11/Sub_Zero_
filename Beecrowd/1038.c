#include<stdio.h>
int main(){
int x,y;
float price; 
scanf("%d %d",&x,&y); 
if (x==1)
{
   price = (4*y); 
}
if (x==2)
{
   price = (4.5*y); 
}
if (x==3)
{
   price = (5*y); 
}
if (x==4)
{
   price = (2*y); 
}
if (x==5)
{
   price = (1.5*y); 
}
printf("Total: R$ %.2f\n",price); 
return 0;
}