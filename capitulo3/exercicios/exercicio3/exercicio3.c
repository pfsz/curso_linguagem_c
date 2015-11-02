/*
 * Exercício 3: Faça um programa que leia três valores inteiros e mostre sua soma.
 */
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
 	int x, y, z, soma;

 	printf("Informe tres numeros inteiros: ");
 	scanf("%d%d%d", &x, &y, &z);

 	soma = x + y + z;
 	printf("A soma dos valores informados e %d\n", soma);

 	return 0;
 }