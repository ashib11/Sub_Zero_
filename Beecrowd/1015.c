#include<stdio.h>
#include<math.h> 
int main(){
float x1,x2,y1,y2,x,y,d; 
scanf("%f %f %f %f",&x1,&y1,&x2,&y2); 

x = ((x2-x1)*(x2-x1));
y = ((y2-y1)*(y2-y1)); 
d = sqrt(x+y); 
printf("%.4f\n",d); 
return 0;
}