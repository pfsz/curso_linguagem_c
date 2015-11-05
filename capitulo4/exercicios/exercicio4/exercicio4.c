/*
 * Exercício 4: Faça um programa que leia o salário de um trabalhador e o
 * valor da prestação de um empréstimo. Se a prestação:
 *     - For maior que 20% do salário, imprima: "Empréstimo não concedido"
 *     - Caso contrário, imprima: "Empréstimo concedido"
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, vl_prestacao;

	printf("Informe o valor do salario: ");
	scanf("%f", &salario);
	printf("Informe o valor da prestacao: ");
	scanf("%f", &vl_prestacao);

	(vl_prestacao > (salario * 0.2)) ? printf("Emprestimo nao concedido!\n") : printf("Emprestimo concedido!\n");

	return 0;
}