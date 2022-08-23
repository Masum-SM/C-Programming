#include<stdio.h>
#include<stdbool.h>
int main(   )
{
    int n;
    scanf("%d" , &n);
     int score [n];
     for( int i =0 ; i < n ; i++){
        scanf("%d ", & score[i]);
     }

     int ans =0;
     for( int i = 0; i < n ; i++){
        if (i == 0 ) continue;
        bool isMax = true , isMin = true;
        for( int j = 0; j<i ; j++){
            if( score[j] <= score[i]){
                    isMin = false;

            }
            else if ( score [j] >= score[i]){
                isMax = false;
            }

        }
        if( isMax || isMin){
            ans++;
        }
     }
     printf("%d", ans);
}
