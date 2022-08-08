#include<stdio.h>
int main(){
    int num_1, num_2;
    scanf("%d %d", &num_1,&num_2);

    /*
    if(num_1>num_2){
        printf("%d is bigger number",num_1);
    }
    else{
        printf("%d is bigger number", num_2);
    }
    */
    int bigger_num = (num_1>num_2? num_1 : num_2);
    printf("%d is bigger number",bigger_num);
}

