#include <stdio.h>
#include<math.h>
int main()
{
   int x;
   long double n, fraction;

   scanf("%llf", &n);
   // fraction = n - (int)n;
   n = n*100; 
   x = n / 10000;
   n = n - (x * 10000);
   printf("%d nota(s) de R$ 100,00\n", x);
   x = n / 5000;
   n = n - (x * 5000);
   printf("%d nota(s) de R$ 50,00\n", x);
   x = n / 2000;
   n = n - (x * 2000);
   printf("%d nota(s) de R$ 20,00\n", x);
   x = n / 1000;
   n = n - (x * 1000);
   printf("%d nota(s) de R$ 10,00\n", x);
   x = n / 500;
   n = n - (x * 500);
   printf("%d nota(s) de R$ 5,00\n", x);
   x = n / 200;
   n = n - (x * 200);
   printf("%d nota(s) de R$ 2,00\n", x);
   printf("MOEDAS:\n");
   x = n / 100;
   n = n - (x * 100);
   // fraction = (fraction*100); 
   // printf("%llf\n",fraction); 
   printf("%d moedas(s) de R$ 1,00\n", x);
   x = n / 50;
   n = n - (x * 50);
   printf("%d moedas(s) de R$ 0.50\n", x);
   x = n / 25;
   n = n - (x * 25);
   printf("%d moedas(s) de R$ 0.25\n", x);
   x = n / 10;
   n = n - (x * 10);
   printf("%d moedas(s) de R$ 0.10\n", x);
   x = n / 5;
   n = n - (x * 5);
   printf("%d moedas(s) de R$ 0.05\n", x);
   x = n / 1;
   n = n - (x * 1);
   printf("%d moedas(s) de R$ 0.01\n", x);

   return 0;
}