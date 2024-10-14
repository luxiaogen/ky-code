#include <iostream>
#include <cstdio>

/*
  在一个关键字递增有序的单链表中插入新关键字,需却表插入后单链表保持递增有序
  key: 如果要插入或删除后单链表保持递增有序,可考虑前后指针
*/

using namespace std;

typedef struct LNode
{
  int data;
  struct LNode *next;
} LNode, *LinkList;

void insertX(LinkList list, int x)
{
  LNode *pre = list; // 指向待插入结点的前一个
  LNode *p = pre->next;
  while (p != NULL)
  {
    if (p->data > x)
      break;
    else
    {
      pre = p;
      p = p->next;
    }
  }
  // 找到待插入位置
  LNode *q = (LinkList)malloc(sizeof(LNode));
  q->data = x, q->next = p, pre->next = q;
}