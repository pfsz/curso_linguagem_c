/*
 * Exercício 9: Faça um programa que leia a altura e o peso de uma pessoa.
 * De acordo com a tabela a seguir, verifique e mostre qual a classificação
 * dessa pessoa.
 * Ver tabela na página 91 do livro - Linguagem C - Completa e Descomplicada
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float altura, peso;

	printf("Informe a altura e o peso: ");
	scanf("%f%f", &altura, &peso);

	if(altura >= 1.70)
	{
		if(peso > 90.00)
		{
			printf("I\n");
		}
		else
		{
			if(peso >= 60.00)
			{
				printf("F\n");
			}
			else
			{
				printf("C\n");
			}
		}
	}
	else
	{
		if(altura >= 1.20)
		{
			if(peso > 90.00)
			{
				printf("H\n");
			}
			else
			{
				if(peso >= 60.00)
				{
					printf("E\n");
				}
				else
				{
					printf("B\n");
				}
			}
		}
		else
		{
			if(peso > 90.00)
			{
				printf("G\n");
			}
			else
			{
				if(peso >= 60.00)
				{
					printf("D\n");
				}
				else
				{
					printf("A\n");
				}
			}
		}
	}

	return 0;
}