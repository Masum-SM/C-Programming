#include<stdio.h>
#include<string.h>
int main()
{

    char a [] = "hello";
    char b []   =   "Maasum";


    int lena = strlen(a);
    int lenb = strlen(b);
    int lenc = lena + lenb;
   char c [lenc+1];
   for(int i =0; i<=lena;i++){
    c[i] = a[i];
   }
      for(int i =0; i<=lenb;i++){
    c[lena+i] = b[i];
   }
   c[lena+lenb] = '\0';
    printf("%s ",c );
}
