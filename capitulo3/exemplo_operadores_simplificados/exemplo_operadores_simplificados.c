#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	// Sem operador simplificado
	x = 10;
	y = 20;

	printf("*** sem operador simplificado ***\n\n");

	x = x + y - 10;
	printf("x = %d\n", x);

	x = x - 5;
	printf("x  = %d\n", x);

	x = x * 10;
	printf("x = %d\n", x);

	x = x / 15;
	printf("x = %d\n", x);

	// Com operador simplificado
	x = 10;
	y = 20;

	printf("\n\n*** com operador simplificado ***\n\n");

	x += y - 10;
	printf("x = %d\n", x);

	x -= 5;
	printf("x = %d\n", x);

	x *= 10;
	printf("x = %d\n", x);

	x /= 15;
	printf("x = %d\n", x);

	return 0;
}