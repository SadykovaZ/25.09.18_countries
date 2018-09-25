#include"Country.h"
#define Kaz 1
#define Rus 2
#define Usa 3
	
#define Capital

int main()
{
	Country KZ, RU, USA;
	KZ.enter();
	RU.enter();
	USA.enter();
	const int n=1;
	//cin >> n;
#if Kaz==2
	KZ.print();

#elif Rus==2
	RU.print();

#elif Usa ==n
	USA.print();

#endif

	system("pause");
}