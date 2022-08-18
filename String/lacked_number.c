#include<stdio.h>
#include<string.h>
int main()
{
    char num[10];
    gets(num);
    int count[10] = {0};

    for( int i = 0; i<9 ; i++){
        char c = num[i];
        int digit = c - '0';
        count[digit]++;
    }
    for( int i = 0; i<9 ; i++){
            if( count[i] == 0 ){
                 printf("%d", i);
            }


    }
}
