#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;

	// O operador vírgula gera uma lista de instruções a serem seguidas
	// antes da atribuição
	x = (y = 2, y + 3);
	printf("x = %d\n", x);

	return 0;
}