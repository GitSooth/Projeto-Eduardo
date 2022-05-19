#include "Dados.h"

#pragma region Pilotos

ListaPilotosPtr regist_piloto(ListaPilotosPtr h)
{
	PilotoPtr novo = (PilotoPtr)malloc(sizeof(Piloto));

	printf("-----Registar Piloto-----\n");
	printf("Nome: ");
	scanf("%s", novo->nome);
	printf("\nNacionalidade: ");
	scanf("%s", novo->nacionalidade);
	printf("\nNúmero: ");
	scanf("%d", &novo->numero);

	if (Existe(h, novo->numero))//Nao podem haver numeros repetidos
	{
		printf("Um piloto com esse número já existe!\n\n");
		return h;
	}
		
	ListaPilotosPtr n = (ListaPilotosPtr)malloc(sizeof(ListaPilotos));
	n->p = *novo;
	n->next = NULL;

	if (h == NULL)					//Se lista estiver vazia
		h = n;
	else							//Se não estiver vazia
	{
		n->next = h;
		h = n;
	}
	return h;
}

bool Existe(ListaPilotosPtr h, int num)
{
	if (h == NULL)
		return false;

	ListaPilotosPtr aux = h;

	while (aux != NULL)
	{
		if (aux->p.numero == num)
			return true;

		aux = aux->next;
	}
	return false;
}

void MostraListaPilotos(ListaPilotosPtr h)
{
	ListaPilotosPtr aux = h;

	while (aux)
	{
		MostraPiloto(aux);
		aux = aux->next;
	}
}

void MostraPiloto(PilotoPtr piloto)
{
	if (piloto != NULL)
	{
		printf("Piloto nº %d\n", piloto->numero);
		printf("Nome: %s\n", piloto->nome);
		printf("Nacionalidade %s\n", piloto->nacionalidade);
	}
}
#pragma endregion



#pragma region Grande Prémio

PremioPtr regist_grande_premio(char* name, char* nameCircuit, int dia, int mes, int ano, char* cidade, char *pais, int nVoltas, int distancia)
{
	PremioPtr premio = (PremioPtr)malloc(sizeof(Premio));
	strcpy(premio->nomePremio, name);
	strcpy(premio->nomeCircuito, nameCircuit);
	strcpy(premio->cidade, cidade);
	strcpy(premio->pais, pais);
	premio->dia = dia;
	premio->mes = mes;
	premio->ano = ano;
	premio->nVoltas = nVoltas;
	premio->distanciaVolta = distancia;

	return premio;
}

void premio_data(PremioPtr premio)
{
	printf("%d / %d / %d", premio->dia, premio->mes, premio->ano);
}

#pragma endregion

