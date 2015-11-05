/*
 * Exercício 5: Faça um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
 * 1) O número digitado ao quadrado.
 * 2) A raiz quadrada do número digitado.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int numero;

	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);

	(numero > 0) ? printf("O quadrado de %d e %.2f. A raiz quadrada de %d e %.2f.\n", numero, pow(numero, 2), numero, sqrt(numero)) : printf("O numero nao e positivo.\n");

	return 0;
}