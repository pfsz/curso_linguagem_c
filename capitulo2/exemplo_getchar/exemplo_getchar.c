/* Exemplo: getchar() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;

	// Lendo um caractere
	printf("Informe um caractere: ");
	c = getchar();
	printf("Caractere: %c\n", c);
	printf("Codigo ASCII: %d\n", c);

	return 0;
}