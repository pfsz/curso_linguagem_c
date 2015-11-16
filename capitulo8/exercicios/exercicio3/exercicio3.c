/*
 * Exercício 3: Crie uma estrutura para representar as coordenadas de um ponto no plano (posicoes x e y).
 * Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.
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
	ponto p1, p2;
	int expr;
	float distancia;

	printf("Informe o ponto x [1]: ");
	scanf("%d", &p1.x);
	printf("Informe o ponto y [1]: ");
	scanf("%d", &p1.y);
	printf("Informe o ponto x [2]: ");
	scanf("%d", &p2.x);
	printf("Informe o ponto y [2]: ");
	scanf("%d", &p2.y);

	printf("\n");

	expr = pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2);
	distancia = sqrt(expr);

	printf("A distancia entre os pontos e de %f\n", distancia);

	return 0;
}