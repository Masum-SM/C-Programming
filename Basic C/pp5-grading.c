#include<stdio.h>
int main(){
    int number;
    printf("Enter any number : ");
    scanf("%d",&number);

  if(number>=80 && number <=100){
    printf("A+");
  }
  else if (number>=60 && number <=69){
    printf("B");
  }
   else if (number>=50 && number <=59){
    printf("C");
  }
   else if (number>=40 && number <=49){
    printf("D");
  }
   else if (number>=0 && number <=40){
    printf("F");
  }
  else{
    printf("Invalid input");
  }
}
