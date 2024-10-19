#include <iostream>
#include <cstdio>

using namespace std;


typedef struct BiTNode {
  int data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

typedef struct Queue
{
  int front, rear;
} Queue;

// 初始化队列
void InitQueue(Queue &Q);
// 判断队列是否为空
bool IsEmpty(Queue &Q);
// 新元素x入队
void EnQueue(Queue &Q, BiTNode *x);
// 队头元素出队,并使用x返回队头元素
void DeQueue(Queue &Q, BiTNode *&x);


/*
  访问对头元素
  四种情况 : 1 无左无右  2 无左有右 3有左无右 4有左有右
*/

bool isComplete = true;   // 是否为完全二叉树
bool flag = false;      // flag = true 表示层序遍历时出现过叶结点或只有左孩子的分支结点
void visit(BiTNode *p)
{
  if (p->lchild == NULL && p->rchild == NULL) flag = true;  // 左右空
  if (p->lchild == NULL && p->rchild != NULL) isComplete = false;     // 左空右不空| 不是完全二叉树
  if (p->lchild != NULL && p->rchild == NULL)   // 左不空右空
  {
    if (flag) isComplete = false;     // 不是完全二叉树
    flag = true;
  }
  if (p->lchild != NULL && p->rchild != NULL) if (flag) isComplete = false;
}