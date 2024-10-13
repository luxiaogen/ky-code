
#include <iostream>
#include <cstdio>
using namespace std;

/*
  如果要插入x或者删除,考虑前后指针p,q
*/
typedef struct LNode
{
  int data;
  struct LNode *next;
} LNode, *LinkList;

void deleteX(LinkList list, int x)
{
  LNode *p = list;    // p指向q的前驱结点
  LNode *q = p->next; // q指向下一个要处理的结点
  while (p != NULL)
    if (p->data != x)
    {
    }
    else
      p = q, q = q->next;
}