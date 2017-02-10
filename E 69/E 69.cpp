#include "SchimbValutar.h"
#include <stdio.h>

int main()
{
	SchimbValutar c1("Casa 1", 1000);
	SchimbValutar c2("Casa 2",2000);
	SchimbValutar c3("Casa 3",3000);

	SchimbValutar::cursEuro=4.3;

	c1.AfisareCasaDeSchimb();
	c2.AfisareCasaDeSchimb();
	c3.AfisareCasaDeSchimb();

	printf("Prima casa vinde 300 EURO:");
	c1.VanzareEURO(300);
	c1.AfisareCasaDeSchimb();

	SchimbValutar::cursEuro = 4.1;

	c1.AfisareCasaDeSchimb();
	c2.AfisareCasaDeSchimb();
	c3.AfisareCasaDeSchimb();

	printf("cu 1000 RON poti cumpara maxim %d EURO.\n",SchimbValutar::MaximDisponibil(1000));
	getchar();
	return 0;

}
