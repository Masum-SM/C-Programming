#include<stdio.h>


int getMin( int x , int y)
{
    if( x>y) return y;
    else return x;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for( int i = 0 ; i<n; i++){
        scanf("%d", &a[i]);
    }

         int min_value = a[0];
         for( int i = 1 ; i<n; i++){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   nnnnnnnnnnnnnnnnnnnnnnnm/; i<n;i++){
            min_value = getMin(min_value, a[i]);

         }

        printf("%d",min_value);

}
