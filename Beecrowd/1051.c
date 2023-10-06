#include<stdio.h>
int main(){
float s,tax=0; 
scanf("%f",&s); 
if (s>=0 && s<=2000)
{
    printf("Isento\n"); 
}
else if (s>2000 && s<=3000)
{
   tax = (s-2000)*0.08; 
   printf("R$ %.2f\n",tax); 
}
else if (s>3000 && s<=4500)
{
   tax = (1000*0.08)+(s-3000)*0.18; 
   printf("R$ %.2f\n",tax); 
}
else if (s>4500)
{
   tax = (1000*0.08)+((s-4500)*0.28)+(1500*0.18) ; 
   printf("R$ %.2f\n",tax); 
}

return 0;
}