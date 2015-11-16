/*
 * Exercício 9: Crie uma estrutura representando um atleta.
 * Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura.
 * Agora, escreva um programa que leia os dados de cinco atletas.
 * Calcule e exiba os nomes do atleta mais alto e do mais velho.
 */

#include <stdio.h>
#include <stdlib.h>

#define N 4

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
	atleta atletas[N], mais_alto, mais_velho;

	printf("\n===============================================\n\n");

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

	printf("\n===============================================\n\n");

	for(i = 0;i < N;i++)
	{
		// verifica o atleta mais velho
		if(atletas[i].idade > mais_velho.idade)
			mais_velho = atletas[i];

		// verifica o atleta mais alto
		if(atletas[i].altura > mais_velho.altura)
			mais_alto = atletas[i];
	}

	printf("\n*** Atleta mais velho ***\n");
	printf("Nome: %s\n", mais_velho.nome);
	printf("Esporte: %s\n", mais_velho.esporte);
	printf("Idade: %d\n", mais_velho.idade);
	printf("Altura: %f\n", mais_velho.altura);

	printf("\n*** Atleta mais alto ***\n");
	printf("Nome: %s\n", mais_alto.nome);
	printf("Esporte: %s\n", mais_alto.esporte);
	printf("Idade: %d\n", mais_alto.idade);
	printf("Altura: %f\n", mais_alto.altura);

	printf("\n===============================================\n\n");

	return 0;
}