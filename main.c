#include "Dados.h"
#include "Menus.h"

int main()
{
	setlocale(LC_ALL, "Portuguese");

	ListaPilotosPtr h = NULL;

	Menu(h);

	return 0;
}

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

void MostraDadosPilotos(ListaPilotosPtr h)
{

}