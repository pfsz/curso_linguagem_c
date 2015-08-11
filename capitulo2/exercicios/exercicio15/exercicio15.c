/*
 * Exercício 15: Escreva um programa que leia três variáveis: char, int e float.
 * Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, 
 * por uma tabulação horizontal e uma em cada linha. Use um único comando printf()
 * para cada operação de escrita das três variáveis.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	int numero1;
	float numero2;

	printf("Insira um caracter, um numero inteiro, um numero real: ");
	scanf("%c%d%f", &c, &numero1, &numero2);

	printf("Os valores lidos foram: %c %d %f\n", c, numero1, numero2);
	printf("Os valores lidos foram: %c\t%d\t%f\t\n", c, numero1, numero2);
	printf("Os valores lidos foram:\n%c\n%d\n%f\n", c, numero1, numero2);

	return 0;
}