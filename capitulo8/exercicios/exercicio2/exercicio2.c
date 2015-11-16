/*
 * Exercício 2: Crie uma estrutura para representar as coordenadas de um ponto
 * no plano (posições x e y). Em seguida, declare e leia do teclado um ponto
 * e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0)
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int x;
	int y;
} ponto;

int main()
{
	ponto p;
	int expr;
	float distancia;

	printf("Informe x: ");
	scanf("%d", &p.x);
	printf("Informe y: ");
	scanf("%d", &p.y);

	expr = pow((p.x - 0), 2) + pow((p.y - 0), 2);
	distancia = sqrt(expr);

	printf("A distancia entre os pontos e a origem e %f\n", distancia);

	return 0;
}