/*
 * Exercício 2: Faça um programa que leia um número real e imprima a quinta parte desse número.
 */
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
 	float numero, resultado;

 	printf("Informe um numero real: ");
 	scanf("%f", &numero);

 	resultado = numero / 5.0;
 	printf("\nA quinta parte do numero e: %f\n", resultado);

 	return 0;
 }