#include<stdio.h>
 
int main()
{
   long long T,N;
   scanf("%lld",&T);
   while(T--)
   {
     scanf("%lld",&N);
     if(360%N==0)
     printf("y ");
     else
     printf("n ");
     if(N>360)
     printf("n ");
     else
     printf("y ");
     if(N>26)
     printf("n \n");
     else
     printf("y \n");
 
   }
}
