#include "p.h"
#include <math.h>
void p4()
{
	int num;
	std::cin >> num;
	int *a = new int[num];
	for (int i = 0; i < num; i++)
		std::cin >> a[i];
	int min = abs(a[0] - a[1]);
	for (int i = 0; i < num - 1; i++)
		for (int j = i + 1; j < num; j++)
			if (min > abs(a[i] - a[j]))
				min = abs(a[i] - a[j]);
	std::cout << min;
}