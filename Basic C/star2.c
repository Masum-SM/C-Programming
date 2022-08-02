#include<stdio.h>
int main(){
    int i,j,n,m;
    scanf("%d",&n);
     scanf("%d",&m);

    for(i=1;i<=n;i++){
        printf("*");
    }

    printf("\n");

    for(j=1;j<=m;j++){
        printf("*");
          for(i=1;i<=n-2;i++){
        printf(" ");
    }
     printf("*");
     printf("\n");
    }


     for(i=1;i<=n;i++){
        printf("*");
    }
    return 0;
}
