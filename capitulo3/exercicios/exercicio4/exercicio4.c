/*
 * Exercício 4: Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x, y, z, i, media;

	printf("Informe quatro numeros reais: ");
	scanf("%f%f%f%f", &x, &y, &z, &i);

	media = (x + y + z + i) / 4;
	printf("A media e %f\n", media);

	return 0;
}