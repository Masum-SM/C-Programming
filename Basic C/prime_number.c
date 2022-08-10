//#include<stdio.h>
//int main()
//{
//   int i,j,isPrime;
//   for(i=100;i<200;i++)
//   {
//       isPrime = 1;
//       for(j=2;j<i-1;j++)
//       {
//           if(i%j==0)
//           {
//               isPrime = 0;
//               break;
//           }
//       }
//       if(isPrime == 1) printf("%d\t",i);
//   }
//   return 0;
//}


#include<stdio.h>
int main()
{
   int i,j,isPrime;
    scanf("%d",&i);
       isPrime = 1;
       for(j=2;j<i-1;j++)
       {
           if(i%j==0)
           {
               isPrime = 0;
               printf("%d is not a prime number.",i);
               break;
           }
       }
       if(isPrime == 1) printf("%d is a prime number.",i);

   return 0;
}
