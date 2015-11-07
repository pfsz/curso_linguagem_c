#include <stdio.h>
#include <stdlib.h>

struct endereco
{
	char rua[50];
	int numero;
};

struct cadastro
{
	char nome[50];
	int idade;
	struct endereco ender;
};

int main()
{
	struct cadastro c;

	printf("Informe o nome: ");
	scanf("%s", c.nome);
	printf("Informe a idade: ");
	scanf("%d", &c.idade);
	printf("Informe a rua: ");
	scanf("%s", c.ender.rua);
	printf("Informe o numero: ");
	scanf("%d", &c.ender.numero);

	printf("\n\n");

	printf("Nome: %s\n", c.nome);
	printf("Idade: %d\n", c.idade);
	printf("Rua: %s\n", c.ender.rua);
	printf("Numero: %d\n", c.ender.numero);

	return 0;
}