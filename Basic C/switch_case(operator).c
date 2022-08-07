#include<stdio.h>
int main(){
    int a,b;
    char op;
   printf("Enter operator ");
    scanf("%c",&op);

    printf("Enter 1st number ");
    scanf("%d",&a);

    printf("Enter 2nd number ");
    scanf("%d",&b);




    switch(op){
    case '+':
        printf(" Summation = %d",a+b);
        break;

    case '-':
        printf("Subtraction = %d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;

  case '/':
      if(b==0){
        printf("Cannot divide by 0");
      }
      else{
        printf(" Divition = %d",a/b);
      }

        break;


    }
}
