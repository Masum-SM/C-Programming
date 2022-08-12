#include<stdio.h>
int main()
{
    char str[] ="This is a string." ;
    int sz = sizeof(str)/sizeof(str[0]);
    printf("%d",sz);

}
