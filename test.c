#include <stdio.h>


int main()
{
 int a = 2, b  = 3;
 int c;
 c = a + b;
 int i;
 int d = a - b;
 
 while(1)
 {
  for(i = 0; i < 100; i++)
  {
   printf("%d %d\n", c, d);
  }
 }
 return 0;
}

