/*
 * Exercício 19: Elabore um programa que leia dois números inteiros e exiba o resultado das operações
 * de "ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles.
 *
 * Exercícios a serem revistos
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int primeiro, segundo;

	printf("Informe dois numeros inteiros: ");
	scanf("%d%d", &primeiro, &segundo);

	printf("primeiro ^ segundo (ou exclusivo): %d\n", (primeiro ^ segundo));
	printf("primeiro | segundo (ou bit a bit): %d\n", (primeiro | segundo));
	printf("primeiro & segundo ( e bit a bit): %d\n", (primeiro & segundo));

	return 0;
}