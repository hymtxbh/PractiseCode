#include "p.h"
void p2()
{
	std::cout << "������Ҫ�жϵ���" << std::endl;
	int n;
	std::cin >> n;
	int flag = 1;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
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