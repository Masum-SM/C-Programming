#include<stdio.h>
int main(){
    int row,col,n=10;
    for( row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            printf("%d\t" ,row*col);
        }
         printf("\n\n\n");
    }

}
