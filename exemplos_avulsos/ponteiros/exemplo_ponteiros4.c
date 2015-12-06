#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	 * O operador asterisco (*) permite modificar
	 * o conteúdo da posição de memória apontada.
	 */

	int x = 10; // variável
	int *p; // ponteiro

	// ponteiro p aponta para variável x
	p = &x;
	printf("x = %d\n", x);
	*p = 12; // alterando o valor da variável para qual o endereço de memória armazenado em p aponta
	printf("*p = %d\n", *p);
	printf("x = %d\n", x);

	return 0;
}