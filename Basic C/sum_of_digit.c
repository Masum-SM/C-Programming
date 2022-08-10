#include<stdio.h>
int main(){
   int number, sum = 0;
   scanf("%d",&number);
   while(number>0){
    int reminder = number % 10;
    number /=10;
    sum += reminder;
   }
 printf("%d",sum);

}


