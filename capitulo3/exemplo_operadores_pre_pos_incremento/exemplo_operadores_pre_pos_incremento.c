#include <stdio.h>
#include <stdlib.h>

int main()
{
	int y, x = 10;

	printf("*** pre-incremento ***\n");

	y = ++x;
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("\n\n*** pos-incremento ***\n");

	y = 0;
	x = 10;

	y = x++;
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}