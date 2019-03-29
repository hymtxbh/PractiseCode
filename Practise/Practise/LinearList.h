#pragma once
#include<iostream>
#include<stdio.h>
#include<cstdio>
template<class T>
class LinearList
{
private :
	int MaxSize;/*˳�����󳤶�*/
	int length;/*˳���ʵ�ʳ���*/
	T * element;/*�洢˳��������*/
public:
	LinearList(int MaxListSize);
	~LinearList() { delete[]element; }
	bool IsEmpty()const { return length == 0; }/*�жϱ��Ƿ�Ϊ��*/
	bool IsFull()const { return length == MaxSize; }/*�жϱ��Ƿ�Ϊ��*/
	int Length()const { return length; }/*���ر�ĳ���*/
	bool Find(int k, T & item)const;/*��ȡ�����±�Ϊk�Ľڵ���ֶ�ֵ����item*/
	int Search(const T & item)const;/*���ң������в����ֶ�ֵΪitem�Ľڵ㲢�������±�*/
	void Delete(int k, T & item);/*ɾ����ɾ���±�Ϊk�Ľڵ㲢�����ֶ�ֵ����item*/
	void Insert(int k, const T & item);/*���룺���±�Ϊk�Ľڵ������ֶ�ֵΪitem�Ľ��*/
};