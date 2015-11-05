/*
 * Exercício 12: Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
 * e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2,
 * e assim por diante.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;

	printf("Informe um numero inteiro (1-7): ");
	scanf("%d", &numero);

	switch(numero)
	{
		case 1:
			printf("Domingo.\n");
			break;
		case 2:
			printf("Segunda-Feira.\n");
			break;
		case 3:
			printf("Terca-Feira.\n");
			break;
		case 4:
			printf("Quarta-Feira.\n");
			break;
		case 5:
			printf("Quinta-Feira.\n");
			break;
		case 6:
			printf("Sexta-Feira.\n");
			break;
		case 7:
			printf("Sabado.\n");
			break;
		default:
			printf("O numero informado deve estar entre 1 e 7!\n");
	}

	return 0;
}