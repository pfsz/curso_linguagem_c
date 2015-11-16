/*
 * Exercício 4: Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
 * superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma
 * estrutura Ponto, a qual contém as posições x e y. Faça um programa que declare e leia uma
 * estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.
 * finalizar este exercicio
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int x;
	int y;
} ponto;

typedef struct
{
	ponto superior_esquerdo;
	ponto inferior_direito;
} retangulo;

int main()
{
	retangulo r;

	printf("*** Informe os dados do retangulo ***");
	printf("Ponto superior_esquerdo.x: ");
	scanf("%d", &r.superior_esquerdo.x);
	printf("Ponto superior_esquerdo.y: ");
	scanf("%d", &r.superior_esquerdo.y);
	printf("Ponto inferior_direito.x: ");
	scanf("%d", &r.inferior_direito.x);
	printf("Ponto inferior_direito.y: ");
	scanf("%d", &r.inferior_direito.y);

	return 0;
}