#include<stdio.h>
 
int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
   {
      long long M;
      scanf("%lld",&M);
      printf("%lld\n",M/2 + 1);
   }
}
