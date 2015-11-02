/*
 * Exercício 9: Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é
 * R = G * pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.141592
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float pi = 3.141592f;
	float graus, radianos;

	printf("Informe um angulo em graus: ");
	scanf("%f", &graus);

	radianos = (graus * pi) / 180.00;
	printf("O angulo em radianos e %f\n", radianos);

	return 0;
}