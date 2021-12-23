#include <stdio.h>

int main()
{
  int x = 55, y = 10;
  printf("x mod y = %d\n", (x%y));
  printf("x mod -y = %d\n", (x%(-y)));
  printf("-x mod y = %d\n", ((-x)%y));
  printf("-x mod y = %d\n", ((-x)%(-y)));

  return 0;
}
