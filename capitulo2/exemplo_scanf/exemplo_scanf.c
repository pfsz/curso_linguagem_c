/* 
 * Exemplo: leitura de dados na linguagem C 
 *
 * Quando o comando scanf() é usado para ler dois ou mais valores,
 * podemos optar por duas formas de digitar os dados no teclado:
 *
 *  - Digitar um valor e, em seguida, pressionar a tecla ENTER. Fazer
 *    isso para cada valor a ser digitado.
 *  - Digitar todos os valores separados por espaço e, por último, pressionar
 *    a tecla ENTER.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, z;
	float y;

	// Leitura de um valor inteiro
	printf("Digite um inteiro: ");
	scanf("%d", &x);
	printf("O inteiro digitado foi: %d\n", x);

	// Leitura de um valor real
	printf("Digite um real: ");
	scanf("%f", &y);
	printf("O real digitado foi: %f\n", y);

	// Leitura de um valor inteiro e outro real
	printf("Digite um valor inteiro e outro real: ");
	scanf("%d%f", &x, &y);
	printf("O inteiro digitado foi %d e o real digitado foi %f\n", x, y);

	// Leitura de dois valores inteiros
	printf("Digite dois valores inteiros: ");
	scanf("%d%d", &x, &z);
	printf("Os inteiros digitados foram: %d e %d\n", x, z);

	// Leitura de dois valores inteiros com espaço
	printf("Digite dois valores inteiros com espaço: ");
	scanf("%d %d", &x, &z);
	printf("Os inteiros digitados foram: %d e %d\n", x, z);

	return 0;
}