#include <iostream>
#include <cstdio>
#define MAX 0x7fffffff

using namespace std;

typedef struct BiTNode {
  int data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

/// 方法一 全局变量
int width[MAX];       // 用于统计各层的结点总数
void PreOrder(BiTree T, int level)
{
  if (T == NULL) return ;

  width[level] ++ ;        // 累加该层结点
  PreOrder(T->lchild, level + 1);     // 遍历左子树
  PreOrder(T->rchild, level + 1);     // 遍历右子树
}


void treeWidth(BiTree T)
{
  PreOrder(T, 0);     // 统计各层宽度
  int maxWidth = 0;     // 找到最大宽度
  for (int i = 0; i < MAX; i ++ )
    if (width[i] > maxWidth) maxWidth = width[i];
  printf("树的宽度是:%d\n", maxWidth);
}