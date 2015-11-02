/*
 * Exercício 1: Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor
 */
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
 	int numero, antecessor, sucessor;

 	printf("Insira um numero inteiro: ");
 	scanf("%d", &numero);

 	antecessor = numero - 1;
 	sucessor   = numero + 1;

 	printf("\nO numero informado foi: %d\n", numero);
 	printf("O numero antecessor e: %d\n", antecessor);
 	printf("O numero sucessor e: %d\n", sucessor);

 	return 0;
 }