#include<stdio.h>
int main(){
double x,s; 
scanf("%lf",&x); 
if (x>=0 && x<=400)
{
    s = x+(x*0.15); 
    printf("Novo salario: %.2lf\n",s); 
    printf("Reajuste ganho: %.2lf\n",(x*0.15)); 
    printf("Em percentual: 15 %\n"); 
}
else if (x>400 && x<=800)
{
    s = x+(x*0.12); 
    printf("Novo salario: %.2lf\n",s); 
    printf("Reajuste ganho: %.2lf\n",(x*0.12)); 
    printf("Em percentual: 12 %\n"); 
}
else if (x>800 && x<=1200)
{
    s = x+(x*0.10); 
    printf("Novo salario: %.2lf\n",s); 
    printf("Reajuste ganho: %.2lf\n",(x*0.10)); 
    printf("Em percentual: 10 %\n"); 
}
else if (x>1200 && x<=2000)
{
    s = x+(x*0.07); 
    printf("Novo salario: %.2lf\n",s); 
    printf("Reajuste ganho: %.2lf\n",(x*0.07)); 
    printf("Em percentual: 7 %\n"); 
}
else if (x>2000)
{
    s = x+(x*0.04); 
    printf("Novo salario: %.2lf\n",s); 
    printf("Reajuste ganho: %.2lf\n",(x*0.04)); 
    printf("Em percentual: 4 %\n"); 
}


return 0;
}