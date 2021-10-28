#include <stdio.h>

int main()
{
  int a, b, temp;
  scanf("%d  %d", &a,  &b);
  int res = b - a + 1;
  for (; a <= b; ++a)
  {
    temp = a;
    while (temp)
    {
      if (temp % 10 == 5)
        --res;
        break;
      temp /= 10;
    }
  }
  printf("res = %d", res);
  return 0;
}
