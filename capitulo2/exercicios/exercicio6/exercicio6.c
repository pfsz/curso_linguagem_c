/*
 * Exercício 6: Faça um programa que leia um valor do tipo double
 * e depois o imprima na forma de notação científica.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double numero;

	printf("Insira um numero real: ");
	scanf("%lf", &numero); // Para ler um valor double é necessário usar %lf
	printf("O valor lido e: %f\n", numero); // somente para conferência
	printf("O valor lido em notacao cientifica e: %e\n", numero);

	return 0;
}