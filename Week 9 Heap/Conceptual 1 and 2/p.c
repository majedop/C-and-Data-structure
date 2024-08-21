#include <stdio.h>
int main()
{
  int T;
  scanf("%d", &T);
  while (T--)
  {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
      scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);
    int flag = 0;
    for (int j = 0; j < N; j++)
    {
      if (A[j] == X)
      {
        flag = 1;
        break;
      }
    }
    if (flag)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }

  return 0;
}