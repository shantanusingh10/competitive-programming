#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
 
int main()
{
    long long T,i,N,P[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43};
   scanf("%lld",&T);
   while(T--)
   {
      scanf("%lld",&N);
      long long ans=0,K=29;
      for(K=29;K<=N;K++)
      {
          long long f=0;
          for(i=0;P[i]<K;i++)
          {
              if(K%P[i]==0){ f=1; break;}
          }
          if(f!=1)ans+=K;
      }
      printf("%lld\n",ans);
   }
  return 0;
}
