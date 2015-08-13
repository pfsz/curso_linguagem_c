#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 65;
	char ch;
	float f = 25.1;

	ch = x;
	printf("ch = %c\n", ch);

	x = f;
	printf("x = %d\n", x);

	f = ch;
	printf("f = %f\n", f);

	f = x;
	printf("f = %f\n", f);

	return 0;
}