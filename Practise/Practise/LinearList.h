#pragma once
#include<iostream>
#include<stdio.h>
#include<cstdio>
template<class T>
class LinearList
{
private :
	int MaxSize;/*顺序表最大长度*/
	int length;/*顺序表实际长度*/
	T * element;/*存储顺序表的数组*/
public:
	LinearList(int MaxListSize);
	~LinearList() { delete[]element; }
	bool IsEmpty()const { return length == 0; }/*判断表是否为空*/
	bool IsFull()const { return length == MaxSize; }/*判断表是否为满*/
	int Length()const { return length; }/*返回表的长度*/
	bool Find(int k, T & item)const;/*存取：将下标为k的节点的字段值付给item*/
	int Search(const T & item)const;/*查找：将表中查找字段值为item的节点并返回其下标*/
	void Delete(int k, T & item);/*删除：删除下标为k的节点并将其字段值赋给item*/
	void Insert(int k, const T & item);/*插入：在下标为k的节点后插入字段值为item的结点*/
};