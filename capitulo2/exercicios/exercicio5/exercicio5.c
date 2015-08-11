/*
 * Exercício 5: Faça um programa que leia um valor do tipo float e
 * depois o imprima usando o operador "%d". Veja o que aconteceu.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numero;

	printf("Insira um valor real: ");
	scanf("%f", &numero);
	printf("O valor lido foi: %d\n", numero);

	return 0;
}