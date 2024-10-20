#include <iostream>
#include <cstdio>
/*
  ## 图的数据结构定义 : 邻接矩阵 + 邻接表
  ## 图的顺序遍历 
  ## 算法通常难度不高 : 拓扑排序 关键路径 ...
*/
#define MAXV 6
using namespace std;



typedef struct {
  int numVertices, numEdges;
  char VerticesList[MAXV];
  int Edge[MAXV][MAXV];
} MGraph;