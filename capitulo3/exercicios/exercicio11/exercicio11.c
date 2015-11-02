/*
 * Exercício 11: Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
 * A área do círculo é A = pi * raio², sendo pi = 3.141592;
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float pi = 3.141592;
	float raio, area;

	printf("Informe o valor do raio de um circulo: ");
	scanf("%f", &raio);

	area = pi * (raio * raio);
	printf("A area do circulo de raio %f e %f\n", raio, area);

	return 0;
}