#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	 * Ponteiros podem ser comparados usando:
	 * ==, !=, >, <, >= e <=
	 */
	int *p, *p1, x, y;

	p = &x;
	p1 = &y;

	if(p == p1)
		printf("Ponteiros iguais!\n");
	else
		printf("Ponteiros diferentes!\n");

	return 0;
}