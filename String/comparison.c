#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s ", a ,b);
    int idx =0;
    while (a[idx] == b[idx]  &&  a[idx]  != '\0 ' && b[idx] !=  '\0' ){
            idx++;
    }
      if(a[idx] == '\0' && b[idx] =='\0' ){
            printf("Equal");
        }
        else if(a[idx] == '\0' && b[idx] !='\0' ){
            printf(" a is smaller");
        }
        else if(a[idx] != '\0' && b[idx] =='\0' ){
            printf(" b is smaller");
        }
        else if(a[idx] < b[idx] ){
            printf(" a is smaller");
        }
        else{
            printf(" b is smaller");
        }
}


/*
Lexicographical

apple
apple
apples
apply

1.Find first missmatch.
2. If booth string end , equal.
3. If one string end, that one is smaller.
4. No string end,compare positon.



*/
