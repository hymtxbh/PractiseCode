#include"p.h"
#include<string>
int f() 
{
	return 0;
}
void stringMatch()
{
	std::cout << "���������ַ�������ƥ��" << std::endl;
	char * c = nullptr;
	std::string s = NULL;
	std::cin >> c;
	std::cin >> s;
	std::cout << "��ʼƥ��" << std::endl;
	std::cout << "���ú���ƥ����" << s.find(c,0)<<std::endl;
	std::cout << "����ƥ��" << std::endl;
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
		std::cout << "���" << i << std::endl;
	i = 0;
	std::cout << "KMP�Ƚ�" << std::endl;

	system("pause");
}