#include <cstdio>

using namespace std;

int Parition(int *A, int l, int r)
{
  int mid = A[l];
  while (l < r)
  {
    while (A[r] >= mid)
      r--;
    A[l] = A[r];
    while (A[l] <= mid)
      l--;
    A[r] = A[l];
  }
  A[l] = mid;
  return l;
}

void quick_sort(int A[], int l, int r)
{
  if (l >= r)
    return; // 递归结束
  int mid = Parition(A, l, r);
  quick_sort(A, l, mid - 1);
  quick_sort(A, mid + 1, r);
}
