#include <iostream>
#include <cstdio>

using namespace std;

bool merge(int *A, int N, int *B, int M, int *C)
{
  int i = 0, j = 0, k = 0;
  while (i < N && j < M )
  {
    if (A[i] <= B[j]) C[k ++ ] = A[i ++ ];
    else C[k ++ ] = B[j ++ ];
  }

  // 扫尾
  while (i < N) C[k ++ ] = A[i ++ ];
  while (j < M) C[k ++ ] = B[j ++ ];

  return true;
}


