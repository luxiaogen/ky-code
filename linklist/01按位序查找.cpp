/*
  key:循环遍历 + 计数器
 */
#include <iostream>
#include <cstdio>
using namespace std;


typedef struct LNode 
{
  int data;
  struct LNode *next;
} LNode, *LinkList;

// 求单链表长度
int listLen(LinkList list)
{
  int len = 0;    //   计数器
  LNode *p = list->next;
  while (p != NULL)
    len++ , p = p->next;
  return len;
}

// 返回单链表中间节点
LNode * findMidNode(LinkList list)
{
  int count = 0, len = 0;    // 计数器
  LNode *p = list->next;
  len = listLen(list);    // 求链表长度
  while (p != NULL)
  {
    count ++ ;
    if (count == len / 2)
      break;
    p = p->next;
  }
  return p;
}



