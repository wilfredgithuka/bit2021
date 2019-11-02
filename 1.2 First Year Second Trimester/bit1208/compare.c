#include <stdio.h>

int main() {
   int a, b;

   printf("Enter value for A :");
   scanf("%d", &a);
   printf("Enter value for B :");
   scanf("%d", &b);

   if(a > b)
      printf("%d\n", a);
   else
      printf("%d\n", b);

   return 0;
}
