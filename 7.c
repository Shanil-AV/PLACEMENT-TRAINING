
#include <stdio.h>

int main()
{
   int x, y, *a, *b, temp;

   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);

   a = &x;
   b = &y;

  int c= *a / *b;
  printf(c);
}
