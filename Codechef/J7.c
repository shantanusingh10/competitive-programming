#include<stdio.h>
#include<math.h>
 
int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
   {
      long long P,A;
      float L,B,C;
      scanf("%lld %lld",&P,&A);
      L = ((P-sqrt(P*P-24*A)))/12.0;
      B = (4*L-P+sqrt((P-4*L)*(P-4*L) + 16*(-4*L*L + P*L -2*A) ))/(-8.0);
      C = P/4.0 - L-B;
      printf("%0.2f \n",L*B*C);
   }
}
