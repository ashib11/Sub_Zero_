#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
float x,y,dif,ans;
scanf("%f %f", &x, &y); 
dif = abs(x-y); 
ans = ceil(y/dif); 
printf("%.0f\n", ans); 
}