#include <string.h>

class SchimbValutar
{
public:
	SchimbValutar(char numele[],int totalEURO);
	~SchimbValutar(void);
	static double cursEuro;

private:
	int totalEURO;
	int totalRON;
	char numele[100];

public:
	void VanzareEURO(int euro);
	void AfisareCasaDeSchimb(void);
	static int MaximDisponibil(int lei);

};
