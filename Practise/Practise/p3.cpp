#include "p.h"
void p3()
{
	std::cout << "������Ҫ�жϵ���" << std::endl;
	int n;
	std::cin >> n;
	int flag = 1;
	if (n == 2 || n == 3)
		flag = 1;
	if (n % 6 == 1 && n % 6 == 5)
		flag = 2;
	for (int i = 5; i < sqrt(n); i+=6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			flag = 2;
			break;
		}
	}
	if (flag != 2)
		std::cout << "������" << std::endl;
	else
		std::cout << "��������" << std::endl;
}