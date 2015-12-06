#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	 * As operações de adição e subtração no endereço
	 * dependem do tipo de dado que o ponteiro aponta.
	 */
	int *p = 0x5DC;  //1500
	char *c = 0x5DC; //1500

	printf("p: %d\nc: %d\n", p, c);
	p++;
	c++;
	printf("p: %d\nc: %d\n", p, c);

	return 0;
}