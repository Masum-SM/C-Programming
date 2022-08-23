#include<stdio.h>
#include<stdbool.h>
int main()
{
    int year;
    scanf("%d", &year);



    for(int y = year+1; ; y++){
        int currnetY = y;
         int freq [10]={0};
         bool repeat = false;

        while(currnetY>0){
            int d = currnetY%10;
            currnetY = currnetY/10;
            freq[d]++;

                if(freq[d] >=2){
               repeat = true;
              }
        }
            if(!repeat){
            printf("%d", y);
            break;

    }
    }


}
