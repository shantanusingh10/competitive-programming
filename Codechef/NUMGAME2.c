#include<stdio.h>
 
int main()
{
    long long T,N;
   scanf("%lld",&T);
   while(T--)
   { 
     scanf("%lld",&N);
     if(N%4==1)
     printf("ALICE\n");
     else
     printf("BOB\n");
   }
   return 0;
 }
