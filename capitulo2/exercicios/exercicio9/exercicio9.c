/*
 * Exercício 9: Faça um programa que leia dois valores do tipo float.
 * Use um único comando de leitura para isso. Em seguida, imprima os
 * valores lidos na ordem inversa em que eles foram lidos.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numero1, numero2;

	printf("Insira dois valores reais: ");
	scanf("%f%f", &numero1, &numero2);
	printf("Os valores lidos foram: %f e %f\n", numero2, numero1);

	return 0;
}