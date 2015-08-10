/* Antes de usar o conteúdo de uma variável, tenha certeza de que ele foi definido */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	// Aqui será impresso um lixo de memória, pode ser qualquer valor
	printf("x = %d\n", x);
	// Definindo o valor de x
	x = 5;
	printf("x = %d\n", x);
	return 0;
}