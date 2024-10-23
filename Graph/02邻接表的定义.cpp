#include <iostream>
#include <cstdio>
#define MAXV 6
using namespace std;

typedef struct EdgeNode {     // 边表结点
  int index;        // 这条边所指向的顶点位置
  struct EdgeNode *next;      // 执行下一条边的指针
  int weight;     //  权值
} EdgeNode;


typedef struct VertexNode {   // 顶点表结点
  char data;      // 顶点信息
  EdgeNode *first;      // 执行第一条依附该顶点的边的指针
} VertexNode, VertexList[MAXV];

typedef struct {
  VertexList list;      // 邻接表
  int numVertex, numEdge;       // 图的顶点数和边数
} ALGraph;

// 初始化
int main()
{
  ALGraph *G = (ALGraph * ) malloc(sizeof(ALGraph));
  for (int i = 0; i < MAXV; i ++ )
    G->list[i].first = NULL;

  G->numVertex = 4;
  G->numEdge = 5;
  G->list[0].data = 'a';
  G->list[1].data = 'b';
  G->list[2].data = 'c';
  G->list[3].data = 'd';

  //AddEdge(G, 0, 3, 1);

}





