#include <stdio.h>
int main()
{
    int t, x;
    float n;

    scanf("%f", &n);
    t =(int) n * 100;
    printf("NOTAS:\n");
    x = t / 10000;
    t = t % 10000;
    printf("%d nota(s) de R$ 100.00\n", x);
    x = t / 5000;
    t = t % 5000;
    printf("%d nota(s) de R$ 50.00\n", x);
    x = t / 2000;
    t = t % 2000;
    printf("%d nota(s) de R$ 20.00\n", x);
    x = t / 1000;
    t = t % 1000;
    printf("%d nota(s) de R$ 10.00\n", x);
    x = t / 500;
    t = t % 500;
    printf("%d nota(s) de R$ 5.00\n", x);
    x = t / 200;
    t = t % 200;
    printf("%d nota(s) de R$ 2.00\n", x);
    printf("MOEDAS\n");
    x = t / 100;
    t = t % 100;
    printf("%d moeda(s) de R$ 1.00\n", x);
    x = t / 50;
    t = t % 50;
    printf("%d moeda(s) de R$ 0.50\n", x);
    x = t / 25;
    t = t % 25;
    printf("%d moeda(s) de R$ 0.25\n", x);
    x = t / 10;
    t = t % 10;
    printf("%d moeda(s) de R$ 0.10\n", x);
    x = t / 5;
    t = t % 5;
    printf("%d moeda(s) de R$ 0.05\n", x);
    x = t / 1;
    t = t % 1;
    printf("%d moeda(s) de R$ 0.01\n", x);

    return 0;
}