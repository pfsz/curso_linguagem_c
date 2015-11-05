/*
 * Exercício 15: Faça um programa que leia os coeficientes de uma equação de segundo grau.
 * Em seguida, calcule e mostre as raízes dessa equação. Caso o coeficiente a seja igual a
 * zero, imprima a mensagem "Não é equação do segundo grau", caso contrário, imprima:
 * Se delta < 0: Não existe raiz.
 * Se delta = 0: Existe uma raiz real. Imprima a raiz e a mensagem "Raiz única".
 * Se delta > 0: Existem duas raízes reais. Imprima as raízes.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, c, delta;
	float x1, x2;

	printf("Informe os coeficientes da equacao (a, b, c): ");
	scanf("%d%d%d", &a, &b, &c);

	if(!(a == 0))
	{
		delta = pow(b, 2) - (4 * a * c);

		if(delta < 0)
		{
			printf("Nao existe raiz real!\n");
		}
		else
		{
			if(delta == 0)
			{
				x1 = (-b + sqrt(delta)) / (2 * a);
				printf("A raiz e %f. Raiz unica.\n", x1);
			}
			else
			{
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				printf("x1 = %f. x2 = %f\n", x1, x2);
			}
		}
	}
	else
	{
		printf("Nao e equacao do segundo grau!\n");
	}

	return 0;
}