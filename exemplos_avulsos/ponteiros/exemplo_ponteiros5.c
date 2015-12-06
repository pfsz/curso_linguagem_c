#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	 * Atribuição: um ponteiro só pode receber o endereço de uma variável
	 * do mesmo tipo do ponteiro.
	 */
	int *p, *p1, x = 10;
	float y = 20.0;

	p = &x;
	printf("*p: %d\n", *p);
	p1 = p;
	printf("p: %d\n", p);
	printf("p1: %d\n", p1);
	printf("*p1: %d\n", *p1);

	p = &y; // errado, o compilador vai deixar passar, mas vai dar problema
	printf("p: %d\n", p);

	return 0;
}