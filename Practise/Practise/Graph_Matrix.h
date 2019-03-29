#pragma once
const int MaxGraphSize = 256;
const int MaxWeight = 1000;
class Graph_Matrix
{
private:
	/*�ڽӾ���*/
	int edge[MaxGraphSize][MaxGraphSize];
	/*��ǰͼ�ж������*/
	int graphsize;
public:
	Graph_Matrix();
	~Graph_Matrix();
	/*���ͼ���Ƿ�Ϊ��*/
	int GraphEmpty(void) const;
	/*���ͼ�ж�������Ƿ��Ѿ������涨�������*/
	int GraphFull(void) const;
	/*����ͼ�ж������*/
	int NumberOfVertices(void) const;
	/*f����ͼ�б߸���*/
	int NumberOfEdges(void) const;
	/*����ָ����Ȩֵ*/
	int GetWeight(const int &v1, const int &v2);
	/*���ض���v���ڽӶ����*/
	int* &GetNeighbors(const int &v);
	/*���ض���v�ĵ�һ���ڽӶ�������*/
	int GetFirstNeighbor(const int v);
	/*���ض���v1����ڶ���v2����һ���ڽӶ������*/
	int GetNextNeighbor(const int v1, const int v2);
	/*��ͼ�в���һ������*/
	void InsertVertex(const int &v);
	/*��ͼ�в���һ����*/
	void InsertEdge(const int &v1, const int &v2, const int wweight);
	/*��ͼ��ɾ��һ������*/
	void DeleteVertex(const int &v);
	/*��ͼ��ɾ��һ����*/
	void DeleteEdge(const int &v1, const int &v2);
	/*���õݹ鷽���Ӷ����ĵ�һ�����㿪ʼ����ͼ�������������*/
	void DepthFirstSearch();
	/*���õ��������Ӷ���v��ʼ����ͼ��������ȱ���v*/
	void DFS(const int v);

};

