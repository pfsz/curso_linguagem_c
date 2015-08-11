/*
 * Exercício 7: Elabore um programa que leia um caractere e
 * depois o imprima como um valor inteiro.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;

	printf("Insira um caracter: ");
	c = getchar();
	printf("O valor lido foi: %d\n", c);

	return 0;
}