#include "p.h"
void DtoB(int n)
{
	if (n)
	{
		DtoB(n / 2);
		printf("%d", n % 2);
	}
}
void p6()
{
	int n;
	std::cin>>n;
	DtoB(n);
	system("pause");
}
