/*
 * Exercício 18: Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda
 * e à direita, do primeiro número pelo segundo.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int primeiro, segundo;

	printf("Informe dois numeros inteiros: ");
	scanf("%d%d", &primeiro, &segundo);

	printf("primeiro << segundo: %d\n", (primeiro << segundo));
	printf("primeiro >> segundo: %d\n", (primeiro >> segundo));

	return 0;
}