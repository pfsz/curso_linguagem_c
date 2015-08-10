/*
 * Exemplo: leitura de dados na linguagem C
 * 
 * O comando scanf() ignora apenas os espaços em branco
 * entre os tipos de entrada. Qualquer outro caractere 
 * inserido entre os tipos de dados deverá ser digitado
 * pelo usuário, mas será descartado pelo programa.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia, mes, ano;

	// Leitura de três valores com barras entre eles
	printf("Insira uma data no formato dia/mes/ano: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	printf("A data digitada foi: %d/%d/%d\n", dia, mes, ano);
	return 0;
}