#include<stdio.h>
#include<stdio.h>
int main()
{
    char str1 [] = "hello masum";
    char str2 [10];
//    strcpy(str2,str1);
     strncpy(str2,str1,10);
     str2[9]= '\0';

    printf("%s",str2);
}
