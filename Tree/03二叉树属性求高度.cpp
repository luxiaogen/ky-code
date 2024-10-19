#include <iostream>
#include <cstdio>
/*
  处理二叉树代码常用思路:
    递归遍历时,通过参数传递自顶向下传递参数
    递归遍历时,通过函数返回值自底向上传递信息
    使用全局遍历,在各级函数间共享信息
*/
using namespace std;


typedef struct BiTNode {
  int data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

int height = 0;   // 用全局变量保存树的高度
void PreOrder(BiTree T, int n)
{
  if (T == NULL) return ;
  if (n > height) height = n;     // 更新
  PreOrder(T->lchild, n + 1);     // 
  PreOrder(T->rchild, n + 1);
}

/// @brief 方法二   返回树的深度
/// @param T 
/// @return 
int PostOrder(BiTree T)
{
  if (T == NULL) return 0;
  int left = PostOrder(T->lchild);
  int right = PostOrder(T->rchild);
  // 树的高度 = max{左子树的高度,右子树的高度}
  if (left > right) return left + 1;
  else return right + 1;
}


