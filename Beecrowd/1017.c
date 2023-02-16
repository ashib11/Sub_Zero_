#include<stdio.h>
int main(){
int a,b,distance; 
float liter; 
scanf("%d %d",&a,&b);


distance = a*b; 
liter = distance/12.0; 
printf("%.3f\n",liter); 
return 0;
}