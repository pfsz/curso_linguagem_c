/* Exemplo: putchar() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c = 'a';
	int x = 65;

	putchar(c); // escreve o caracter 'a'
	putchar('\n'); // muda de linha
	putchar(x); // escreve o valor 65 como caractere, no caso o caractere 'A'
	putchar('\n'); // muda de linha

	return 0;
}