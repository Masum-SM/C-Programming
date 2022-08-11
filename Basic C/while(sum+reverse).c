#include<stdio.h>
int main(){

    int x ,reverse=0;
//    int sum = 0;
    scanf("%d",&x);

    while(x>0){
        int digit = x%10;

         x /=10;

//         sum += digit;

         reverse=reverse*10+ digit;


        printf("digit = %d    x = %d \n", digit,x);
    }
    printf("reverse = %d",reverse);
}
