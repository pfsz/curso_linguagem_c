/*
 * Exercício 13: Faça um programa que mostre ao usuário um menu com quatro opções de 
 * operações matemáticas (as operações basicas por exemplo). O usuário escolhe uma
 * das opções, e o seu programa pede dois valores numéricos e realiza a operação,
 * mostrando o resultado.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char operacao;
	int numero1, numero2;

	printf("** Escolha uma das operacoes **\n1) +\n2) -\n3) *\n4) /\nDigite uma operacao: ");
	operacao = getchar();

	switch(operacao)
	{
		case '+':
			printf("Informe dois numeros inteiros: ");
			scanf("%d%d", &numero1, &numero2);
			printf("%d + %d = %d\n", numero1, numero2, (numero1 + numero2));
			break;
		
		case '-':
			printf("Informe dois numeros inteiros: ");
			scanf("%d%d", &numero1, &numero2);
			printf("%d - %d = %d\n", numero1, numero2, (numero1 - numero2));
			break;
		case '*':
			printf("Informe dois numeros inteiros: ");
			scanf("%d%d", &numero1, &numero2);
			printf("%d * %d = %d\n", numero1, numero2, (numero1 * numero2));
			break;
		case '/':
			printf("Informe dois numeros inteiros: ");
			scanf("%d%d", &numero1, &numero2);
			printf("%d / %d = %d\n", numero1, numero2, (numero1 / numero2));
			break;
		default:
			printf("Informe uma operacao valida!\n");
	}

	return 0;
}