#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            printf("%d\n",i);
            count++;
        }
    }
    printf("Number of divisor of n is %d",count);
}
