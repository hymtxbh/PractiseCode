#include "LinearList.h"
template<class T> 
LinearList<T>::LinearList(int MaxListSize)
{
	MaxSize = MaxListSize;
	element = new T[MaxSize];	/*申请规模为MaxSize的数组空间*/
	length = 0;					/*初始无结点*/
}
///将下标为k的结点的字段值赋给item并返回true，若不存在则返回false
template<class T>
bool LinearList<T>::Find(int k, T & item) const
{
	if(k<0||k>length-1||length == 0)
	{
		std::cout << "节点不存在或数组为空" << std::endl;
		return false;
	}
	item = element[k];
	return true;
}

///查找字段值为item的节点返回其下标，不然返回-1
template<class T>
int LinearList<T>::Search(const T & item) const
{
	for (int i = 0; i < length; i++)
		if (element[i] == item)
			return i;
	return -1;
}

///删除表中下标为k的节点并赋值给item
template<class T>
void LinearList<T>::Delete(int k, T & item)
{
	if (k<0 || k>length - 1 || length == 0)
		std::cout << "删除不合法"<<std::endl;
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

///下标为k的节点后插入item
template<class T>
void LinearList<T>::Insert(int k, const T & item)
{
	if (k<-1 || k>length - 1 || length == MaxSize)
		std::cout << "插入不合法" << std::endl;
	else
	{
		for (int i = length-1; i > k; i++)
			element[i + 1] = element[i];
		element[k + 1] = item;
		length++;
	}
	return;
}
