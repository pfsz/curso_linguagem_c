/*
 * Exercício 17: Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.
 *
 * Exercícios a serem revistos.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, complemento;

	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);

	complemento = ~numero;
	printf("O complemento bit a bit e %d\n", complemento);

	return 0;
}