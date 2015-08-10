/* Exemplo: junto ao tipo de saída, pode-se adicionar texto e não apenas espaços */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 10;

	printf("Total = %d\n", x);
	printf("%d caixas\n", x);
	printf("Total de %d caixas\n", x);

	return 0;
}