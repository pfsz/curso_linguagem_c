/*
 * Exercício 1: Faça um programa que leia dois números e mostre qual deles é o maior.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;

	printf("Informe dois numeros inteiros: ");
	scanf("%d%d", &a, &b);

	(a > b) ? printf("O numero %d e maior que %d\n", a, b) : printf("O numero %d e maior que %d\n", b, a);

	return 0;
}