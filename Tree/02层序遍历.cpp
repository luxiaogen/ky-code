#include <iostream>
#include <cstdio>

using namespace std;

typedef struct BiTNode
{
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

void visit(BiTree p)
{
  cout << p->data << ' ';
}

// 层序遍历
void LevelOrder(BiTree T)
{
  Queue Q;
  InitQueue(Q);
  BiTree p;
  EnQueue(Q, T);

  while (!IsEmpty(Q))
  {
    DeQueue(Q, p);
    visit(p);   // 访问对头元素
    if (p -> lchild != NULL)
      EnQueue(Q, p->lchild);    // 左孩子入队
    if (p -> rchild != NULL)
      EnQueue(Q, p->rchild);
  }
}
