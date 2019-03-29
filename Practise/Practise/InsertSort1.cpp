#include"p.h"
void InsertSort1()
{
	int a[] = { 3,4,2,1,10,6,9 };
	int n = 7;
	for (int i = 0; i < n; i++)
		printf("%d\n", a[i]);
	printf("ÅÅÐò¿ªÊ¼\n");
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		j = i - 1;
		int k = a[i];
		while (j >= 0 && k < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", a[i]);
	printf("ÅÅÐò½áÊø");
	system("pause");
}