#include<stdio.h>
int main()
{
    char str[40];
    printf("Enter your name: ");
//    scanf("%s",str);
//    gets(str);
    fgets(str,10,stdin);
    printf("Hello,%s",str);
}
