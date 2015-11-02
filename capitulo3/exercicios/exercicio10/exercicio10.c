/*
 * Exercício 10: A importância de R$ 780.000,00 será divida entre três ganhadores de
 * um concurso, sendo que:
 *   i) O primeiro ganhador receberá 46% do total.
 *  ii) O segundo ganhador receberá 32% do total.
 * iii) O terceiro receberá o restante.
 * 
 * Calcule e imprima a quantia recebida por cada um dos ganhadores.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float premio = 780000.00;
	float primeiro, segundo, terceiro;

	primeiro = premio * 0.46;
	segundo = premio * 0.32;
	terceiro = premio - (primeiro + segundo);
	printf("A importancia de %f sera dividida entre tres ganhadores.\n\n", premio);
	printf("O primeiro ganhador recebera %f\n", primeiro);
	printf("O segundo ganhador recebera %f\n", segundo);
	printf("O terceiro ganhador recebera %f\n", terceiro);

	return 0;
}