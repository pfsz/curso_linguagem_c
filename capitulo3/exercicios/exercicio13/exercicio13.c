/*
 * Exercício 13: Sejam a e b os catetos de um triângulo cuja hipotenusa c é obtida pela equação:
 * c é a raiz quadrada e a² + b².
 * Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada.
 * Imprima o resultado.
 *
 * Observação: compilar com o comando "gcc exercicio13.c -lm -o exercicio13", caso contrário uma exceção ocorrerá (biblioteca math.h)
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, soma, c;

	printf("Insira o cateto a: ");
	scanf("%f", &a);
	printf("Insira o cateto b: ");
	scanf("%f", &b);

	soma = pow(a, 2) + pow(b, 2);
	c = sqrt(soma);
	printf("A hipotenusa e %f\n", c);

	return 0;
}