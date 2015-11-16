#include<stdio.h>
#define MAX(a,b) a>b?a:b
 
int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
   {
      long long M,N;
      scanf("%lld %lld",&M,&N);
      printf("%lld %lld\n",MAX(M,N),M+N);
   }
}
