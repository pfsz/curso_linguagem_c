/*
 * Exercício 8: Leia um valor que represente uma temperatura em graus celsius e apresente-a
 * convertida em graus fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo
 * F a temperatura em fahrenheit e C a temperatura em celsius.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float c, f;

	printf("Informe uma temperatura em graus celsius: ");
	scanf("%f", &c);

	f = c * (9.0 / 5.0) + 32.0;
	printf("A temperatura em Fahrenheit e %f\n", f);

	return 0;
}