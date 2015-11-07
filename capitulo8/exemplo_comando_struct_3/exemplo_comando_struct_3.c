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
	struct cadastro c = {"Carlos", 18, "Avenida Brasil", 1082};

	printf("Nome: %s\n", c.nome);
	printf("Idade: %d\n", c.idade);
	printf("Rua: %s\n", c.rua);
	printf("Numero: %d\n", c.numero);

	return 0;
}