/*
 * Exercício 16: Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão
 * desse número por dois (utilize os operadores de deslocamento de bits).
 */
#include <stdio.h>
#include <stdlib.h>

#define N 1

int main()
{
	int numero;

	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);

	printf("numero * 2: %d\n", (numero << N));
	printf("numero / 2: %d\n", (numero >> N));

	return 0;
}