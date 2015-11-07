#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main()
{
	struct cadastro c[4];
	int i;

	for(i = 0;i < 4;i++)
	{
		printf("Informe o nome [%d]: ", i);
		scanf("%s", c[i].nome);
		printf("Informe a idade [%d]: ", i);
		scanf("%d", &c[i].idade);
		printf("Informe a rua [%d]: ", i);
		scanf("%s", c[i].rua);
		printf("Informe o numero [%d]: ", i);
		scanf("%d", &c[i].numero);
		printf("\n");
	}

	for(i = 0;i < 4;i++)
	{
		printf("Nome [%d]: %s\n", i, c[i].nome);
		printf("Idade [%d]: %d\n", i, c[i].idade);
		printf("Rua [%d]: %s\n", i, c[i].rua);
		printf("Numero [%d]: %d\n\n", i, c[i].numero);
	}

	return 0;
}