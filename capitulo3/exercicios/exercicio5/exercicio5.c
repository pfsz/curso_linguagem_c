/*
 * Exercício 5: Faça um programa que calcule o ano de nascimento de uma pessoa
 * a partir de sua idade e do ano atual.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade, ano_atual, ano_nascimento;

	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);

	ano_nascimento = ano_atual - idade;
	printf("O ano de nascimento e %d\n", ano_nascimento);

	return 0;
}