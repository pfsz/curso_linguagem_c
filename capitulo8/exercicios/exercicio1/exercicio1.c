/*
 * Exercício 1: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa
 * e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura
 * lida.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
} cadastro;

int main()
{
	cadastro c;

	printf("Informe o nome: ");
	scanf("%s", c.nome);
	printf("Informe a idade: ");
	scanf("%d", &c.idade);
	printf("Informe a rua: ");
	scanf("%s", c.rua);
	printf("Informe o numero: ");
	scanf("%d", &c.numero);

	printf("\n");

	printf("Nome: %s\n", c.nome);
	printf("Idade: %d\n", c.idade);
	printf("Rua: %s\n", c.rua);
	printf("Numero: %d\n", c.numero);

	return 0;
}