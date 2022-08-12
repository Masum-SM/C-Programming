#include<stdio.h>
int main(){
    int stunedts;
    printf("Enter number of students : ");
    scanf("%d",&stunedts);
    int mark[stunedts];
    for(int i = 0; i<stunedts;i++){
        printf("Enter any students Marks: ");
        scanf("%d",&mark[i]);

    }

    for(int i = 0; i<4; i++){
        printf("student %d got %d marks\n", i+1, mark[i]);
    }
}
