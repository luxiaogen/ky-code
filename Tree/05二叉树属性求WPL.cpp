#include <iostream>
#include <cstdio>

using namespace std;


typedef struct BiTNode {
  int weight;   //  权值
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

int WPL = 0;      // 用于累加叶结点的带权路径长度
void PreOrder(BiTree T, int level)
{
  if (T == NULL) return;
  if (T -> lchild == NULL && T->rchild == NULL)   // 叶结点
    WPL += level * T->weight;     // 累加叶结点带权路径长度
  PreOrder(T->lchild, level + 1);
  PreOrder(T->rchild, level + 1);
}