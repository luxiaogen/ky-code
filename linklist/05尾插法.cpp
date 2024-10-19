#include <iostream>
#include <cstdio>
using namespace std;

typedef struct Node {
  int data;
  struct Node *next;
} Node, *LinkList;

LinkList A = NULL, B = NULL;

void rear_insert(LinkList C)
{
  A = (LinkList) malloc(sizeof(Node));
  A->next = NULL;
  Node *rear = A;
  B = (LinkList) malloc(sizeof(Node));
  B->next = NULL;
  int count = 1;
  while (C->next != NULL)
  {
    Node *p = C->next;
    C->next = C->next->next;
    if (count % 2 == 1) // jishu
      rear ->next = p, p -> next = NULL, rear = p;
    else p->next = B->next, B->next = p;
    count ++;
  }
}

