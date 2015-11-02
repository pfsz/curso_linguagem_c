/*
 * Exercício 7: Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em doláres.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float reais, cotacao, dolar;

	printf("Informe um valor em reais: ");
	scanf("%f", &reais);
	printf("Informe a cotacao do dolar: ");
	scanf("%f", &cotacao);

	dolar = reais / cotacao;
	printf("O valor em dolares e %f\n", dolar);

	return 0;
}