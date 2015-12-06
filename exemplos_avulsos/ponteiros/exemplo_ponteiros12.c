#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	 * Antes de acessar o conteúdo é preciso converter
	 * o ponteiro genérico para o tipo de ponteiro com
	 * o qual se deseja trabalhar.
	 */
	void *pp;
	int p2 = 10;
	pp = &p2; // endereco de int

	//printf("Conteudo: %d\n", *pp); // erro
	printf("Conteudo: %d\n", *(int *)pp);

	return 0;
}