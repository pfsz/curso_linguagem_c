/*
 * Exercício 11: Elabore um programa que contenha uma constante qualquer do tipo float.
 * Use o comando #define. Imprima essa constante.
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415f

int main()
{
	printf("A constante PI vale %f\n", PI);

	return 0;
}