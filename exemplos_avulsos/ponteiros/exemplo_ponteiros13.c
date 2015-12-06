#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	 * As operações aritméticas são sempre realizadas
	 * com base em uma unidade de memória (1 byte)
	 */
	void *p = 0x5DC; //1500

	printf("p: %d\n", p); //1500
	p++;
	printf("p: %d\n", p); //1501
	p = p + 15;
	printf("p: %d\n", p); //1516
	p = p - 2;
	printf("p: %d\n", p); //1514

	return 0;
}