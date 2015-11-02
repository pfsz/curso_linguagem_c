#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;

	// sem operadores simplificados
	printf("*** sem operadores simplificados ***\n\n");
	x = 10;
	y = 20;

	x = x * y - 10;
	printf("x = %d\n", x);

	x = x - 5 + y;
	printf("x = %d\n", x);

	// com operadores simplificados
	printf("\n\n*** com operadores simplificados ***\n\n");

	x = 10;
	y = 20;

	x *= y - 10;
	printf("x = %d\n", x);

	x -= 5 + y;
	printf("x = %d\n", x);

	return 0;
}