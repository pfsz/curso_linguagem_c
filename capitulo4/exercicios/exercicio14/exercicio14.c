/*
 * Exercício 14: Faça um programa para verificar se determinado número inteiro lido é divisivel
 * por 3 ou 5, mas não simultaneamente pelos dois.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;

	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);

	if(!(numero % 3 == 0 && numero % 5 == 0))
	{
		if(numero % 3 == 0)
		{
			printf("O numero e divisivel por 3.\n");
		}
		else
		{
			if(numero % 5 == 0)
			{
				printf("O numero e divisivel por 5.\n");
			}
			else
			{
				printf("O numero nao e divisivel nem por 3 e nem por 5.\n");
			}
		}
	}

	return 0;
}