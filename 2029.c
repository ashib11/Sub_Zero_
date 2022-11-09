#include<stdio.h>
int main(){
    double v,d,r,area=0,altura=0; 
    double pi = 3.14; 
    // formula Volume = pi*r*r*h
    // area =2πrh+2πr2 
while (scanf("%lf %lf",&v,&d)!=EOF)
{
    r = d/2.0; 
    altura = v/(pi*r*r); 
    area = (pi*r*r); 
    printf("ALTURA = %.2lf\n",altura); 
    printf("AREA = %.2lf\n",area); 
}


return 0;
}