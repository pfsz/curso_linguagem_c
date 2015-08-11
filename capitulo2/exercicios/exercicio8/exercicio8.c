/*
 * Exercício 8: Faça um programa que leia dois números inteiros e depois os imprima
 * na ordem inversa em que eles foram lidos.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero1, numero2;

	printf("Insira um numero inteiro: ");
	scanf("%d", &numero1);
	printf("Insira um numero inteiro: ");
	scanf("%d", &numero2);

	printf("Os numeros lidos foram: %d e %d\n", numero2, numero1);

	return 0;
}