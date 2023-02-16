#include <stdio.h>
int main()
{
	int x, n;
	float t;

	scanf("%d", &n);

	t = n;
	x = n / 100;
	n = n - (x * 100);
	printf("%d nota(s) de R$ 100,00\n", x);
	x = n / 50;
	n = n - (x * 50);
	printf("%d nota(s) de R$ 50,00\n", x);
	x = n / 20;
	n = n - (x * 20);
	printf("%d nota(s) de R$ 20,00\n", x);
	x = n / 10;
	n = n - (x * 10);
	printf("%d nota(s) de R$ 10,00\n", x);
	x = n / 5;
	n = n - (x * 5);
	printf("%d nota(s) de R$ 5,00\n", x);
	x = n / 2;
	n = n - (x * 2);
	printf("%d nota(s) de R$ 2,00\n", x);
	printf("MOEDAS:\n");

	x = n / 100;
	n = n - (x * 100);
	printf("%d moedas(s) de R$ 1,00\n", x);
	x = n / 50;
	n = n - (x * 50);
	printf("%d moedas(s) de R$ 1,00\n", x);
	x = n / 25;
	n = n - (x * 25);
	printf("%d moedas(s) de R$ 1,00\n", x);
	x = n / 10;
	n = n - (x * 10);
	printf("%d moedas(s) de R$ 1,00\n", x);
	x = n / 5;
	n = n - (x * 5);
	printf("%d moedas(s) de R$ 1,00\n", x);
	x = n / 1;
	n = n - (x * 1);
	printf("%d moedas(s) de R$ 1,00\n", x);

	return 0;
}