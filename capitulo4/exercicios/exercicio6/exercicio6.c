/*
 * Exercício 6: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
 * seu peso ideal, utilizando as seguintes fórmulas (em que "h" corresponde à altura):
 * - Homens (72,7 * h) - 58
 * - Mulheres (62,1 * h) - 44,7
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float altura, peso_ideal;
	char sexo;

	printf("Informe o sexo: ");
	sexo = getchar();
	printf("Informe a altura: ");
	scanf("%f", &altura);

	switch(sexo)
	{
		case 'm':
			peso_ideal = (72.7 * altura) - 58.0;
			printf("O peso ideal e %.2f\n", peso_ideal);
			break;
		case 'f':
			peso_ideal = (62.1 * altura) - 44.7;
			printf("O peso ideal e %.2f\n", peso_ideal);
			break;
	}

	return 0;
}