#include<stdio.h>
#include<math.h>
int main(){
int r,l;
double pi = 3.1415,volume;
scanf("%d %d",&r,&l); 
volume = (4*pi*r*r*r)/3; 
printf("%.f\n",floor(l/volume));   
return 0;
}