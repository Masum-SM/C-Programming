#include<stdio.h>
int main(){
   int number,reverse = 0;

   scanf("%d",&number);
   while( number > 0){
      int reminder = number % 10;
      number /=10;
      reverse = reverse * 10 + reminder;

   }
    printf("%d",reverse);


}
