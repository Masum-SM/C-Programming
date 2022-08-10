#include<stdio.h>
int main(){
   int number;
   int fact = 1;

   scanf("%d",&number);
   for(int i = number ; i>0; i--){
     fact = fact*i;
   }
   printf("Factorial of %d id : %d",number,fact);


}

