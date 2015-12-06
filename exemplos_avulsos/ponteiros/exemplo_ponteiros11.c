#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	 * Exemplo ponteiro genérico
	 */
	void *pp;
	int *p1, p2 = 10;

	p1 = &p2;
	pp = &p2; // endereço de int
	printf("Endereco em pp: %p\n", pp); // %p retorna o endereco de memoria
	pp = &p1; // endereço de int *
	printf("Endereco em pp: %p\n", pp);
	pp = p1; // endereço de int
	printf("Endereco em pp: %p\n", pp);


	return 0;
}