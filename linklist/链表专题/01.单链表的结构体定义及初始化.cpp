#include <iostream>
#include <cstdio>

using namespace std;

typedef struct LNode
{
  int data;
  struct LNode *next;
} LNode, *LinkList;

/*
  初始化带头结点的链表
*/
void InitList1(LinkList &L)
{
  L = (LinkList)malloc(sizeof(LNode)); // 创建头结点
  L->next = NULL;                      // 头结点指针域置空
}
///////////////////
//=================== 带头结点 ======================
/*
  带头结点判空
*/
bool IsEmptyList1(LinkList L)
{
  // 若头结点指针域为空,则链表为空表
  if (L->next == NULL)
    return true;
  return false;
}

/*
  遍历输出带头结点的单链表L中各节点的数据域的值
*/
void ListVist(LinkList L)
{
  if (IsEmptyList1(L))
    return; // 链表为空
  LNode *p = L->next;
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
}

/*
  计算带头结点的单链表L中数据的个数
*/
int Length(LinkList L)
{
  if (L->next == NULL) return 0;      // 空链表
  LNode *p = L->next;     //
  int length = 0;
  while (p != NULL) 
  {
    length ++ ;
    p = p->next;
  }
  return length;
}

/*
  按序查找:查找一个带头结点的单链表L中的第i(位序)各数据节点的位置,若存在,则返回指向该结点的指针,若不存在,则返回NULL
  i---位序
*/
LNode *Search_i(LinkList L, int i)
{
  if (L->next == NULL || i < 1)
    return NULL;      // 若链表为空或i输入的不合法
  LNode *p = L->next;
  int k = 1;
  while (p != NULL)
  {
    if (k == i) return p;     // 位序
    p = p->next;
    k ++ ;
  }
  return NULL;
}

/*
  (按值查找)请设计一个算法,查找一个带头结点的单链表L中的第一个值为e的结点位置,若存在,
  则返回指向该结点的指针,若不存在则返回NULL
*/
LNode *Search(LinkList L, int e)
{
  if(L->next == NULL) return NULL;      // 若链表为空
  LNode *p = L->next;
  while (p != NULL) 
  {
    if (p->data == e) return p;
    else p = p->next;
  }
  return NULL;


}
/*
  在一个带头结点的非递减有序链表中插入一个值为x的新节点,使得新插入结点后链表依然有序
  //// 插入-删除考虑前后指针
*/
void ListInsert(LinkList L, int x)
{
  LNode *pre = L, *p = L->next;
  while (p != NULL) {
    if (p->data > x) {      // 若p指向结点数据域大于x,则找到插入位置
      break;
    }
    pre = p;      // 没有找到位置继续变脸
    p = p->next;
  }
  LNode *s = (LNode *) malloc(sizeof(LNode));
  s->data = x;
  pre->next = s;

  s->next = p;
}

/*
  采用头插法在头指针L处建立一个带头结点的单链表,输入-1表示结束
  头插结束后返回建立的单链表
*/
LinkList HeadInsert(LinkList &L)
{
  L = (LinkList) malloc(sizeof(LNode));     // 申请头结点
  L->next = NULL;
  LNode *s;     /// 辅助指针
  int x;    // 辅助变量
  scanf("%d", &x);
  while (x != -1)
  {
    s = (LNode *) malloc(sizeof(LNode));
    s->data = x;
    s->next = L->next;
    L->next = s;
    scanf("%d", &x);
  }
  return L;     // 返回新链表指针
}


/*
  编写一个带头结点的单链表L就地逆置,所谓"就地"是指空间O(1)
*/

int main()

{
  // 带头结点的
  LinkList *head = (LinkList *) malloc(sizeof(LNode));

}

/////////////////////

// ==========================不带头结点=====================
/*
  初始化带头结点的链表
*/
void InitList2(LinkList &L)
{
  L = NULL; // 头指针置空
}

bool IsEmptyList(LinkList L)
{
  if (L->next == NULL)
    return true;
  return false;
}
