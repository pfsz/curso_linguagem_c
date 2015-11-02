/*
 * Exercício 12: Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
 * O volume de um cilindro circular é calculado por meio da seguinte fórmula:
 * V = pi * raio² * altura, em que pi = 3.141592
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float pi = 3.141592;
	float altura, raio, volume;

	printf("Informe a altura do cilindro: ");
	scanf("%f", &altura);
	printf("Informe o raio do cilindro: ");
	scanf("%f", &raio);

	volume = pi * (raio * raio) * altura;
	printf("O volume do cilindro e %f\n", volume);


	return 0;
}