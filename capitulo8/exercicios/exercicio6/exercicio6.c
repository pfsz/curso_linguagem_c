/*
 * Exercício 6: Crie uma estrutura representando um aluno de uma disciplina.
 * Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas
 * de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazena
 * nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
 * geral dentro os cinco.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int matricula;
	char nome[100];
	float nota1, nota2, nota3;
} aluno;

int main()
{
	int i, ind_max;
	float aux = 0.0,  media = 0.0;
	aluno alunos[5];

	printf("\n===================================================\n");

	for(i = 0;i < 5;i++)
	{
		printf("Informe o numero da matricula do aluno [%d]: ", (i + 1));
		scanf("%d", &alunos[i].matricula);
		printf("Informe o nome do aluno [%d]: ", (i + 1));
		scanf("%s", alunos[i].nome);
		printf("Informe a primeira nota do aluno [%d]: ", (i + 1));
		scanf("%f", &alunos[i].nota1);
		printf("Informe a segunda nota do aluno [%d]: ", (i + 1));
		scanf("%f", &alunos[i].nota2);
		printf("Informe a terceira nota do aluno [%d]: ", (i + 1));
		scanf("%f", &alunos[i].nota3);
		printf("\n");
	}

	printf("\n===================================================\n");

	for(i = 0;i < 5;i++)
	{
		media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

		if(media > aux)
		{
			aux = media;
			ind_max = i;
		}
	}

	printf("Aluno [%d] - Matricula: %d\n", (ind_max + 1), alunos[ind_max].matricula);
	printf("Aluno [%d] - Nome: %s\n", (ind_max + 1), alunos[ind_max].nome);
	printf("Aluno [%d] - Primeira nota: %f\n", (ind_max + 1), alunos[ind_max].nota1);
	printf("Aluno [%d] - Segunda nota: %f\n", (ind_max + 1), alunos[ind_max].nota2);
	printf("Aluno [%d] - Terceira nota: %f\n", (ind_max + 1), alunos[ind_max].nota3);

	printf("\n===================================================\n");
	
	return 0;
}