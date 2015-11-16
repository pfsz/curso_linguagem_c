/*
 * Exercício 10: Usando a estrutura "atleta" do exercício anterior,
 * escreva um programa que leia os dados de cinco atletas e os exiba
 * por ordem de idade, do mais velho para o mais novo.
 * finalizar este exercicio
 */

#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef struct
{
	char nome[50];
	char esporte[50];
	int idade;
	float altura;
} atleta;

int main()
{
	int i;
	atleta atletas[5], aux;

	printf("\n===================================================\n\n");

	for(i = 0;i < N;i++)
	{
		printf("%d - Nome: ", (i + 1));
		scanf("%s", atletas[i].nome);
		printf("%d - Esporte: ", (i + 1));
		scanf("%s", atletas[i].esporte);
		printf("%d - Idade: ", (i + 1));
		scanf("%d", &atletas[i].idade);
		printf("%d - Altura: ", (i + 1));
		scanf("%f", &atletas[i].altura);
		printf("\n");
	}

	printf("\n===================================================\n\n");

	for(i = 0;i < N;i++)
	{
		// ordenação aqui
	}

	for(i = 0;i < N;i++)
	{
		printf("%d - Nome: %s\n", (i + 1), atletas[i].nome);
		printf("%d - Esporte: %s\n", (i + 1), atletas[i].esporte);
		printf("%d - Idade: %d\n", (i + 1), atletas[i].idade);
		printf("%d - Altura: %f\n", (i + 1), atletas[i].altura);
		printf("\n");
	}

	printf("\n===================================================\n\n");

	return 0;
}