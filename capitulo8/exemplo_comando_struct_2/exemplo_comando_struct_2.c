#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main()
{
	struct cadastro c;

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