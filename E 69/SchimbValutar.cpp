#include "SchimbValutar.h"
#include <stdio.h>

double SchimbValutar::cursEuro = 0;

SchimbValutar::SchimbValutar(char numele[],int totalEURO)
{
	strcpy(this->numele,numele);
	this->totalEURO=totalEURO;
	totalRON = 0;
}

SchimbValutar::~SchimbValutar(void)
{
}

void SchimbValutar::VanzareEURO(int euro)
{
	if (totalEURO>euro)
	{
		totalEURO-=euro;
		totalRON+=euro*cursEuro;
	}
	else{
		printf("Nu avem suma disponibila!\n");
	}
}

void SchimbValutar::AfisareCasaDeSchimb(void)
{
	printf("%s are %d EURO si %d RON.Total %g RON\n",numele,totalEURO,totalRON,totalEURO*cursEuro+totalRON);
}

int SchimbValutar::MaximDisponibil(int lei)
{
	return lei/cursEuro;
}
