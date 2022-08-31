#include<stdio.h>

int calculateGCD (int x, int y)
{
   while(y>0){
    int temp = x % y ;
    x = y;
    y = temp;
   }

    int gcd = x;
    return gcd;
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

   int gcd = calculateGCD( a, b);
    printf("%d", gcd);
}
