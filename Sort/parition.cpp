#include <cstdio>
#include <iostream>
using namespace std;
/*
  利用快排划分的思想
  时间复杂度: O(n)
  空间复杂度: O(1)
*/
int parition(int *A, int l, int r)
{
  int pivot = A[l];
  while (l < r)
  {
    while (l < r && A[r] >= pivot)
      r--;
    A[l] = A[r];
    while (l < r && A[l] <= pivot)
      l++;
    A[r] = A[l];
  }
  A[l] = pivot;
  return l;
}

// 找到数组第k(小/大)个元素
int huanfen(int A[], int n, int k)
{
  int l = 0, r = n - 1, mid = 0;
  while (1)
  {
    mid = parition(A, l, r);
    if (mid == k - 1)
      break;
    else if (mid > k - 1)
      r = mid - 1;
    else if (mid < k - 1)
      l = mid + 1;
  }
  return A[k - 1];
}