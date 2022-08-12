#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fibo [n];
    fibo[0]=0;
    fibo[1]=1;
    for(int i =2; i<=n; i++){
        fibo[i] = fibo[i-2]+fibo[i-1];
    }
    for(int i=0; i<=n; i++){
        printf("%d => %d \n",i+1,fibo[i]);
    }
}
