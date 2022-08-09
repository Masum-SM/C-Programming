#include <stdio.h>


int main() {
   int i, j;
   int num=1;

   for (i = 1; i <= 5; ++i) {
      for (j = 1; j <= i; j++) {
         printf("%d", num);
      }
      num++;
      printf("\n");
   }
   return 0;
}


/*
int main() {
   int  i, j, number = 1;

   for (i = 1; i <= 4; i++) {
      for (j = 1; j <= i; j++) {
         printf("%d ", number);
         number++;
      }
      printf("\n");
   }
   return 0;
}

*/
