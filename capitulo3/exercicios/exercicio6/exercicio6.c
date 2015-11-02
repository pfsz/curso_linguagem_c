/*
 * Exercício 6: Leia uma velocidade em km/h e apresente convertida em m/s.
 * A fórmula de conversão é M = k/36, sendo K a velocidade em km/h e M em m/s.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float k, m;

	printf("Informe a velocidade em km/h: ");
	scanf("%f", &k);

	m = k / 36.0;
	printf("A velocidade em m/s e %f\n", m);

	return 0;
}