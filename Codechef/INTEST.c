#include<stdio.h>
 
int main()
{
   int n,k,i,a,sum=0;
 
   scanf("%d%d",&n,&k);
   for(i=1;i<=n;i++)
   {
      scanf("%d",&a);
      if(a%k==0)
      sum=sum+1;
   }
   printf("%d",sum);
   return 0;
}
