#include "p.h"
void p2()
{
	std::cout << "请输入要判断的数" << std::endl;
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
		std::cout << "是素数" << std::endl;
	else
		std::cout << "不是素数" << std::endl;
}