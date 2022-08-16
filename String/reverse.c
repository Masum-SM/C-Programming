#include<stdio.h>
#include<string.h>

int main()
{

    int n;
    scanf("%d" , &n );
    int array[n];
    for( int i = 0 ; i<n ; i++){
        scanf(" %d " , &array[i]);
    }
    for( int i = 0 , j = n-1 ; i<j ; i++ , j--){
        int temp = array[i];
        array[i] = array[j];
        array[j ] = temp;
    }
    for( int i = 0 ; i<n ; i++){
        printf("%d " , array[i]);
    }
}


/*
using extra array.
int main()
{
    int n;
    scanf("%d",&n);
    int a1[n];
    int a2[n];

    for(int i =0;  i< n;  i++){
        scanf("%d ", &a1[i]);
    }

    for( int i = 0; i<n ; i++ ){
        a2[n-1-i] = a1[i];
    }

    for(int i = 0; i<n; i++){
        printf("%d ", a2[i]);
    }


}
*/

/*
a1 =  1 2 3 4 5
a2 = 5 4 3 2 1

positons
0 4
1 3
2 2
3 1
4 0

*/
