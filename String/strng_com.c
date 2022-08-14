#include<stdio.h>
#include<string.h>
int main()
{
    char a[100] , b[100];
    scanf("%s%s",a,b);

    int val = strcmp(a,b);
    printf("%d",val);

}

/*
negative = 1st is smaller;
zero = equal.
positive = 2nd is smaller
*/
