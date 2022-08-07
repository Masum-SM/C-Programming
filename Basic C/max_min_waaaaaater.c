#include<stdio.h>
int main(){
    int a ,b ,c;
    scanf("%d %d %d", &a,&b,&c);
    int water_left = a-b;
    if(water_left>=c){
        printf("0");
    }
    else{
            c -=water_left;
        printf("%d",c);
    }
}
