#include "Menus.h"

void Menu(ListaPilotosPtr h)
{
	int opcao;
	printf("-----------------Campeonato MotoGP 2022-----------------\n");
	printf("1. Registar Piloto\n");
	printf("2. Registar Grande Pr�mio\n");
	printf("2. Registar classifica��o\n");
	printf("4. Consultar\n");
	printf("0. Sair\n");
	printf("Selecione a op��o: ");
	scanf("%d", &opcao);

	switch (opcao)
	{
	case 1:

		h = regist_piloto(h);
		Menu(h);
		break;

	case 2:
		//Registar grande pr�mio
		break;

	case 3:
		//Registar classifica��o
		break;

	case 4:
		//Registar classifica��o

		break;

	case 0:
		break;
	}
}

void Consultar()
{
	int opcao;
	printf("--------Consultar--------\n");
	printf("1. Grandes Pr�mios");
	printf("2. Pilotos");
	printf("3. Campeonato");
	printf("4. Melhor e pior piloto");


	switch (opcao)
	{
	case 1:
		break;

	case 2:
		break;

	case 3:
		break;
	}
}

