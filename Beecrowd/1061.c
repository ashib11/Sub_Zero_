#include<stdio.h>
int main(){
int x,h,m,s; 
int x1,h1,m1,s1; 
scanf("Dia %d",&x); 
getchar(); 
scanf("%d : %d : %d",&h,&m,&s); 
getchar();
scanf("Dia %d",&x1); 
getchar();
scanf("%d : %d : %d",&h1,&m1,&s1); 
getchar(); 
x = x1 - x; 
s = s1-s; 
m = m1 - m;
h = h1- h; 

if (s<0)
{
    s+=60;                                                                                                             
    m--; 
}

if (m<0)
{
    m+=60; 
    h--;
}

if (h<0)
{
    h+=24;
    x--; 
}

printf("%d dia(s)\n",x); 
printf("%d hora(s)\n",h); 
printf("%d minuto(s)\n",m);
printf("%d segundo(s)\n",s); 

return 0;
}