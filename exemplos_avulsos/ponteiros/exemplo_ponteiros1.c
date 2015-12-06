#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	 * Ponteiros não inicializados apontam para um
	 * lugar indefinido.
	 */
	int *p;

	/*
	 * Um ponteiro pode ter um valor especial NULL,
	 * que é o endereço de nenhum lugar.
	 */
	 *p = NULL;

	 return 0;
}