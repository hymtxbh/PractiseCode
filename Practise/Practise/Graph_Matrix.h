#pragma once
const int MaxGraphSize = 256;
const int MaxWeight = 1000;
class Graph_Matrix
{
private:
	/*邻接矩阵*/
	int edge[MaxGraphSize][MaxGraphSize];
	/*当前图中顶点个数*/
	int graphsize;
public:
	Graph_Matrix();
	~Graph_Matrix();
	/*检测图中是否为空*/
	int GraphEmpty(void) const;
	/*检测图中顶点个数是否已经超过规定顶点个数*/
	int GraphFull(void) const;
	/*返回图中顶点个数*/
	int NumberOfVertices(void) const;
	/*f返回图中边个数*/
	int NumberOfEdges(void) const;
	/*返回指定边权值*/
	int GetWeight(const int &v1, const int &v2);
	/*返回顶点v的邻接顶点表*/
	int* &GetNeighbors(const int &v);
	/*返回顶点v的第一个邻接顶点的序号*/
	int GetFirstNeighbor(const int v);
	/*返回顶点v1相对于顶点v2的下一个邻接顶点序号*/
	int GetNextNeighbor(const int v1, const int v2);
	/*向图中插入一条顶点*/
	void InsertVertex(const int &v);
	/*向图中插入一条边*/
	void InsertEdge(const int &v1, const int &v2, const int wweight);
	/*从图中删除一个顶点*/
	void DeleteVertex(const int &v);
	/*从图中删除一条边*/
	void DeleteEdge(const int &v1, const int &v2);
	/*采用递归方法从定点表的第一个顶点开始进行图的深度优先搜索*/
	void DepthFirstSearch();
	/*采用迭代方法从顶点v开始进行图的深度优先遍历v*/
	void DFS(const int v);

};

