/*
 * Exercício 7: Uma empresa vende o mesmo produto para quatro diferentes estados.
 * Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa
 * em que o usuário entre com o valor e o estado de destino do produto e o programa
 * retorne o preço final do produto acrescido do imposto do estado em que ele será 
 * vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
 * 
 * Tabela de impostos
 * MG: 7%, SP: 12%, RJ: 15%, MS: 8%
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float valor;
	int estado;

	printf("Entre com o valor do produto: ");
	scanf("%f", &valor);
	printf("Entre com o estado: 1) MG, 2) SP, 3) RJ, 4) MS (Entre com o numero da opcao): ");
	scanf("%d", &estado);

	switch(estado)
	{
		case 1:
			valor += (valor * 0.07);
			printf("O preco final do produto no estado de MG e %.2f\n", valor);
			break;
		case 2:
			valor += (valor * 0.12);
			printf("O preco final do produto no estado de SP e %.2f\n", valor);
			break;
		case 3:
			valor += (valor * 0.15);
			printf("O preco final do produto no estado do RJ e %.2f\n", valor);
			break;
		case 4:
			valor += (valor * 0.08);
			printf("O preco final do produto no estado do MS e %.2f\n", valor);
			break;
		default:
			printf("Informe um estado valido!\n");
	}

	return 0;
}