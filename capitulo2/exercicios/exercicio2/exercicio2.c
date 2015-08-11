/*
 * Exercício 2: Escreva um programa que leia um número inteiro
 * e depois o imprima.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	printf("O numero digitado foi %d\n", numero);

	return 0;
}