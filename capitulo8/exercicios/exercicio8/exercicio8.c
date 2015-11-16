/*
 * Exercício 8: Crie uma estrutura capaz de armazenar o nome e a data de nascimento
 * de uma pessoa. Agora, escreva um programa que leia os dados de seis pessoas.
 * Calcule e exiba os nomes da pessoa mais nova e da mais velha.
 */

#include <stdio.h>
#include <stdlib.h>

#define N 4

typedef struct
{
	int dia;
	int mes;
	int ano;
} data;

typedef struct
{
	char nome[100];
	data data;
} pessoa;

int main()
{
	int i;
	pessoa pessoas[N], mais_nova, mais_velha;

	printf("\n===============================================\n\n");

	for(i = 0;i < N;i++)
	{
		printf("%d - Informe o nome: ", (i + 1));
		scanf("%s", pessoas[i].nome);
		printf("%d - Informe o nascimento (dd/mm/aaaa): ", (i + 1));
		scanf("%d/%d/%d", &pessoas[i].data.dia, &pessoas[i].data.mes, &pessoas[i].data.ano);
		printf("\n");
	}

	printf("\n===============================================\n\n");

	for(i = 0;i < N;i++)
	{
		// verificando a pessoa mais velha
		if(pessoas[i].data.ano < mais_velha.data.ano)
			mais_velha = pessoas[i];
		else if(pessoas[i].data.ano == mais_velha.data.ano)
		{
			if(pessoas[i].data.mes < mais_velha.data.mes)
				mais_velha = pessoas[i];
			else if(pessoas[i].data.mes == mais_velha.data.mes)
				if(pessoas[i].data.dia < mais_velha.data.dia)
					mais_velha = pessoas[i];
		}

		// verificando a pessoa mais nova
		if(pessoas[i].data.ano > mais_nova.data.ano)
			mais_nova = pessoas[i];
		else if(pessoas[i].data.ano == mais_nova.data.ano)
		{
			if(pessoas[i].data.mes > mais_nova.data.mes)
				mais_nova = pessoas[i];
			else if(pessoas[i].data.mes == mais_nova.data.mes)
				if(pessoas[i].data.dia > mais_nova.data.dia)
					mais_nova = pessoas[i];
		}
	}

	printf("\n*** Pessoa mais nova ***\n");
	printf("Nome: %s\n", mais_nova.nome);
	printf("Nascimento: %d/%d/%d\n", mais_nova.data.dia, mais_nova.data.mes, mais_nova.data.ano);
	printf("\n*** Pessoa mais velha ***\n");
	printf("Nome: %s\n", mais_velha.nome);
	printf("Nascimento: %d/%d/%d\n", mais_velha.data.dia, mais_velha.data.mes, mais_velha.data.ano);
	printf("\n===============================================\n\n");


	return 0;
}