#include <iostream>
#include <cstdio>
using namespace std;

// 二叉树结点定义(链式存储)

typedef struct BiTNode
{
  int data; // 数据域
  struct BiTNode *lchild, *rchild;
} BiNode, *BiTree;

/*
  先序遍历
*/

void visit(BiTNode *node)
{
  cout << node->data << ' ';
}

void PreOrder(BiTree root)
{
  if (root == NULL)
    return;
  visit(root);
  PreOrder(root->lchild);
  PreOrder(root->rchild);
}

/*
  中序遍历
*/
void InOrder(BiTree root)
{
  if (root == NULL)
    return;
  InOrder(root->lchild);
  visit(root);
  InOrder(root->rchild);
}

/*
  后序遍历
*/

void PostOrder(BiTree root)
{
  if (root == NULL)
    return;
  PostOrder(root->lchild);
  PostOrder(root->rchild);
  visit(root);
}