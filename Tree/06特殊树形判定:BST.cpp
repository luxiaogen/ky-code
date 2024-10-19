#include <iostream>
#include <cstdio>

using namespace std;


/*
  中序遍历二叉树,判断是否能否是一个升序序列
*/
typedef struct BiTNode {
  int data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

int cur = -0xffffff;      // 记录当前遍历到的最小是
bool isBST = true;        // 记录是否为二叉排序树

void InOrder(BiTree T)
{
  if (T == NULL) return ;
  InOrder (T->lchild);
  if (T->data >= cur) cur = T->data;
  else isBST = false;
  InOrder(T->rchild);
}


