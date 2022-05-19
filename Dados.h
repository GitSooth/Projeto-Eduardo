#pragma once

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<locale.h>
#pragma warning( disable : 4996 ) //evita MSG ERROS: _CRT_SECURE_NO_WARNINGS

#define MAX_PIL 20
#define MAX_PIL_CORR 12
#define MAX_CORR 5

typedef struct Piloto {
	char nome[50];
	char nacionalidade[50];
	int numero;
}Piloto, *PilotoPtr;

typedef struct Premio {
	char nomePremio[50];
	char nomeCircuito[50];
	int dia, mes, ano;
	char cidade[50], pais[50];
	int nVoltas;
	int distanciaVolta;
}Premio, *PremioPtr;

typedef struct ListaPilotos {
	Piloto p;
	PilotoPtr* next;
}ListaPilotos, * ListaPilotosPtr;

ListaPilotosPtr regist_piloto(ListaPilotosPtr h);
void MostraListaPilotos(ListaPilotosPtr h);
void MostraPiloto(PilotoPtr p);
bool Existe(ListaPilotosPtr h, int num);
void premio_data(PremioPtr premio);