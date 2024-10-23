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


int main()
{
  MGraph * G = (MGraph *) malloc(sizeof(MGraph));
  for (int i = 0; i < MAXV; i ++ )
    for (int j = 0; j < MAXV ; j ++ )
      G->Edge[i][j] = 0;

  G->numVertices = 4;
  G->numEdges = 5;
  G->VerticesList[0] = 'a';
  G->VerticesList[1] = 'b';
  G->VerticesList[2] = 'c';
  G->VerticesList[3] = 'd';

  G->Edge[0][1] = 1;
  G->Edge[0][3] = 1;
  G->Edge[1][3] = 1;
  G->Edge[1][2] = 1;
  G->Edge[2][3] = 1;


  return 0;
}

