#include<stdio.h>
int main()
{
    int number_of_users;
    scanf("%d",&number_of_users);

    int sum = 0;

    int rating[number_of_users];
    for(int i =0; i<number_of_users;i++){
       scanf("%d",&rating[i]);
       sum += rating[i];
    }
    double avg = (double) (sum)/number_of_users;
    printf("%lf\n",avg);

    int count[6]={0};
    for(int i = 0 ; i <number_of_users ;i++){
        int current_value = rating[i];
        count[current_value]++;
        }

    for(int i = 1;i<=5;i++){
        printf("%d => %d \n",i,count[i]);
    }

}
