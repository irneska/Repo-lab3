#include <stdio.h>

int main()
{
  int a, b, temp;//// a-initial number of the range, b-final number of the range,temp-temporary variable
  scanf("%d  %d", &a,  &b);
  int result = b - a + 1;
  for (; a <= b; ++a)
  {
    temp = a;
    while (temp)
    {
      if (temp % 10 == 5)
        --result;
        break;
      temp /= 10;
    }
  }
  printf("result = %d\n", result);
  return 0;
}
