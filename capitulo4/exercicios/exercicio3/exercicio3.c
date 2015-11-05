/*
 * Exercício 3: Faça um programa que leia um número inteiro e verifique se esse número é par ou impar.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;

	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);

	(numero % 2 == 0) ? printf("O numero %d e par.\n", numero) : printf("O numero %d e impar.\n", numero);

	return 0;
}