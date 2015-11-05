/*
 * Exercício 10: Faça um programa que leia três números inteiros positivos e efetue
 * o cálculo de uma das seguintes médias de acordo com um valor numérico digitado
 * pelo usuário e mostrado na tabela a seguir:
 *
 * 1) média geométrica: x * y * z
 * 2) média ponderada : (x + 2 * y + 3 * z) / 6
 * 3) média harmônica: 1 / (1 / x + 1 / y + 1 / z)
 * 4) média aritmética: (x + y + z) / 3
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, z, opcao;

	printf("Informe tres numeros inteiros positivos: ");
	scanf("%d%d%d", &x, &y, &z);
	printf("** Media disponiveis**\n1) Média geométrica.\n2) Média ponderada.\n3) Média harmônica.\n4) Média aritmética.\n\nDigite a opcao escolhida: ");
	scanf("%d", &opcao);

	if((x > 0 && y > 0 && z > 0))
	{
		switch(opcao)
		{
			case 1:
				printf("A media geometrica e %d\n", (x * y * z));
				break;
			case 2:
				printf("A media ponderada e %d\n", ((x + 2 * y + 3 * z) / 6));
				break;
			case 3:
				printf("A media harmonica e %d\n", ((1 / (1 / x + 1 / y + 1 / z))));
				break;
			case 4:
				printf("A media aritmetica e %d\n", ((x + y + z) / 3));
				break;
			default:
				printf("Informe uma opcao valida!\n");
		}
	}
	else
	{
		printf("Os numeros informados tem que ser positivos!\n");
	}

	return 0;
}