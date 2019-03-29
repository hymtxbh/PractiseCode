#include"p.h"
#include<string>
int f() 
{
	return 0;
}
void stringMatch()
{
	std::cout << "输入两个字符串进行匹配" << std::endl;
	char * c = nullptr;
	std::string s = NULL;
	std::cin >> c;
	std::cin >> s;
	std::cout << "开始匹配" << std::endl;
	std::cout << "调用函数匹配结果" << s.find(c,0)<<std::endl;
	std::cout << "朴素匹配" << std::endl;
	int i = 0;
	while (i < s.length()-strlen(c))
	{
		int j = 0;
		while (s[i] == c[j] && j < strlen(c))
		{
			i++;
			j++;
		}
		if (j == strlen(c))
		{
			i = i - strlen(c);
			break;
		}
		i = i - j + 1;
	}
	if (i == i - strlen(c))
		std::cout << "结果" << i << std::endl;
	i = 0;
	std::cout << "KMP比较" << std::endl;

	system("pause");
}