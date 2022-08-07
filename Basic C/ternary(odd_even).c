#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    char result = (number % 2 ==0 ? "Even" : "Odd");
    printf("%c",result);
    return 0;
}
