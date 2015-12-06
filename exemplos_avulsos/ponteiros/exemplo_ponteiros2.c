#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 10;
	int *p;

	p = &x;

	printf("x = %d\n", x); // Valor armazenado em x
	printf("&x = %d\n", &x); // endereço de memória de x
	printf("p = %d\n", p); // endereço de memória de x, pois p aponta para x

	return 0;
}