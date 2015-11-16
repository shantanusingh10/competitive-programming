#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main()
{
   long long N,i;
   scanf("%lld",&N);
   long long A[N];
   for(i=0;i<N;i++)
   {
 
      scanf("%lld",&A[i]);
   }
   int max = 0,M=0;
   for(i=0;i<N;i++)
   {
      if(A[i]!=0)
      {
         max++;
         M = MAX(max,M);
      }
      else max=0;
   }
   printf("%d",M);
   return 0;
}
