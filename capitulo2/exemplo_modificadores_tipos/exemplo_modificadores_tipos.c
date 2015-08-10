/*
 * Modificadores dos tipos de variáveis primitivos:
 *
 *  signed: Esse modificador determina que uma variável declarada dos tipos
 *          char ou int poderão ter valores positivos ou negativos, é o modo
 *          padrão de definição desses tipos de variáveis.
 *
 *  unsigned: Esse modificador determina que uma variável declarada dos tipos
 *            char ou int somente poderá ter valores positivos e o valor zero.
 *            Nesse caso a variável perde o bit de sinal, o que dobra a sua 
 *            capacidade de armazenamento para valores positivos.
 *
 *  short: O modificador short determina que uma variável do tipo int terá
 *         apenas 16 bits, independentemente do processador.
 *
 *  long: O modificador long determina que uma variável do tipo int terá
 *        32 bits, independentemente do processador. Também determina que o
 *        tipo double tenha maior precisão.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Exemplo de declaração utilizando modificadores
	signed char x1;
	signed int y1;
	unsigned char x2;
	unsigned int y2;
	short int i;
	long int n;
	long double d;

	// Podemos também usar mais de um modificador ao mesmo tempo
	unsigned long int m;

	return 0;
}