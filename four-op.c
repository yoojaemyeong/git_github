#include <stdio.h>

int multiply(int i, int j)
{
   return i * j;
}

int add(int i, int j)
{
   return i + j;
}

int subtract(int i, int j)
{
   return i - j;
}
int main( )
{
   int a;
   int b;
   printf("두 정수를 공백으로 구분하여 입력하세요.\r\n");
   scanf("%d%d", &a, &b);

   int c1 = multiply(a, b);
   int c2 = add(a, b);
   int c3 = subtract(a, b);
   printf("곱: %d\r\n합: %d\r\n차: %d\n", c1, c2, c3);
   return 0;
}