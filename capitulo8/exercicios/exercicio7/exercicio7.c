/*
 * Exercício 7: Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
 * hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa
 * estrutura e imprima a maior hora.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int hora;
	int minuto;
	int segundo;
} hora;

int main()
{
	int i;
	hora horarios[5];
	hora maior_hora = {0, 0, 0};

	printf("\n==============================================\n");

	for(i = 0;i < 5;i++)
	{
		printf("%d - Informe o horário (H:M:S): ", (i + 1));
		scanf("%d:%d:%d", &horarios[i].hora, &horarios[i].minuto, &horarios[i].segundo);
		printf("\n");
	}

	printf("\n==============================================\n");

	
	for(i = 0;i < 5;i++)
	{
		if(horarios[i].hora > maior_hora.hora)
			maior_hora = horarios[i];
		else if(horarios[i].hora == maior_hora.hora)
		{
			if(horarios[i].minuto > maior_hora.minuto)
				maior_hora = horarios[i];
			else
				if(horarios[i].segundo > maior_hora.segundo)
					maior_hora = horarios[i];
		}
	}

	printf("\nO maior horario e %d:%d:%d\n", maior_hora.hora, maior_hora.minuto, maior_hora.segundo);
	printf("\n==============================================\n");
	return 0;
}