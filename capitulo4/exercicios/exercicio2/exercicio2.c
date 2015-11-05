/*
 * Exercício 2: Faça um programa que leia dois números e mostre o maior deles.
 * Se por acaso os números forem iguais, imprima a mensagem "Números iguais".
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;

	printf("Informe dois numeros inteiros: ");
	scanf("%d%d", &a, &b);

	if(a == b)
	{
		printf("Numeros iguais.\n");
	}
	else
	{
		if(a > b)
		{
			printf("O numero %d e maior que %d\n", a, b);
		}
		else
		{
			printf("O numero %d e maior que %d\n", b, a);
		}
	}

	return 0;
}