#include<stdio.h>
#include<string.h>
int main()
{
    char a [50] =  "hello";
    char b  [50] =    "masum";
    strncat(a,b,5);

    printf("%s",a);
}
