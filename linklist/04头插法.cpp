#include <iostream>
#include <cstdio>

using namespace std;

/*
  头插法(原地逆置)
*/

typedef struct LNode
{
  int data;
  struct LNode *next;
} LNode, *LinkList;

void head_insert(LinkList list)
{
  LinkList head = (LNode *)malloc(sizeof(LNode)); // 头结点
  head->next = NULL;
  while (list->next != NULL)
  {
    LNode *p = (LNode *)malloc(sizeof(LNode));
    head->next = head->next->next;
    p->next = head->next; // 头插法
    head->next = p;
  }
  list->next = head->next;
}
