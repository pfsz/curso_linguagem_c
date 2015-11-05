/*
 * Exercício 8: Escreva um programa que, dada a idade de um nadador, o classifique em uma das seguintes
 * categorias:
 *
 * Infantil A: 5-7
 * Infantil B: 8-10
 * Juvenil  A: 11-13
 * Junivel  B: 14-17
 * Sênior    : maiores 18 anos
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);

	if(idade >= 18)
	{
		printf("Senior.\n");
	}
	else
	{
		if(idade >= 14)
		{
			printf("Juvenil B.\n");
		}
		else
		{
			if(idade >= 11)
			{
				printf("Juvenil A.\n");
			}
			else
			{
				if(idade >= 8)
				{
					printf("Infantil B.\n");
				}
				else
				{
					if(idade >= 5)
					{
						printf("Infantil A.\n");
					}
					else
					{
						printf("Nao possui idade de classificao.\n");
					}
				}
			}
		}
	}

	return 0;
}