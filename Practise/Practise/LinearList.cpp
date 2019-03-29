#include "LinearList.h"
template<class T> 
LinearList<T>::LinearList(int MaxListSize)
{
	MaxSize = MaxListSize;
	element = new T[MaxSize];	/*�����ģΪMaxSize������ռ�*/
	length = 0;					/*��ʼ�޽��*/
}
///���±�Ϊk�Ľ����ֶ�ֵ����item������true�����������򷵻�false
template<class T>
bool LinearList<T>::Find(int k, T & item) const
{
	if(k<0||k>length-1||length == 0)
	{
		std::cout << "�ڵ㲻���ڻ�����Ϊ��" << std::endl;
		return false;
	}
	item = element[k];
	return true;
}

///�����ֶ�ֵΪitem�Ľڵ㷵�����±꣬��Ȼ����-1
template<class T>
int LinearList<T>::Search(const T & item) const
{
	for (int i = 0; i < length; i++)
		if (element[i] == item)
			return i;
	return -1;
}

///ɾ�������±�Ϊk�Ľڵ㲢��ֵ��item
template<class T>
void LinearList<T>::Delete(int k, T & item)
{
	if (k<0 || k>length - 1 || length == 0)
		std::cout << "ɾ�����Ϸ�"<<std::endl;
	else
	{
		item = element[k];
		if (length == 1)
			element[0] = nullptr;
		else
		{
			for (int i = k + 1; i < length - 1; i++)
				element[i - 1] = element[i];
			element[length - 1] = nullptr;
		}
		length -- ;
	}
	return;
}

///�±�Ϊk�Ľڵ�����item
template<class T>
void LinearList<T>::Insert(int k, const T & item)
{
	if (k<-1 || k>length - 1 || length == MaxSize)
		std::cout << "���벻�Ϸ�" << std::endl;
	else
	{
		for (int i = length-1; i > k; i++)
			element[i + 1] = element[i];
		element[k + 1] = item;
		length++;
	}
	return;
}
