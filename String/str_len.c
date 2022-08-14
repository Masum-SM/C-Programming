#include<stdio.h>
#include<string.h>
int main()
{
    char str [40] = "Hello Masum";
    int len = 0;
    while(str[len] != 0){
        len++;
    }
    int length = strlen(str);
    printf("%d\n",len);
    printf("%d\n",length);


}
