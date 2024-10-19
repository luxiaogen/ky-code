#include <iostream>
#include <cstdio>

using namespace std;


typedef struct BiTNode {
  int data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

bool isBalance = true;
int PostOrder(BiTree T)
{
  if (T == NULL) return 0;
  int left = PostOrder(T->lchild);
  int right = PostOrder(T->rchild);
  
  if (left - right > 1) isBalance = false;
  if (right - left > 1) isBalance = false;
  
  // 树的深度 max = (左子树深度, 右子树深度) +  1;
  if (left > right) return left + 1;
  return right + 1;
}