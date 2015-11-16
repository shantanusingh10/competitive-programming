#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  long long T,N,K,i;
  scanf("%lld",&T);
  while(T--)
  {
    scanf("%lld %lld",&N,&K);
    long long A[N],ans=0;
    for(i=0;i<N;i++)
    {
      scanf("%lld",&A[i]);
    }
    for(i=0;i<N;i++)
    {
      if(A[i]%2==0)ans++;
    }
    if(K==0)
    {
      if(ans==N)printf("NO\n");
      else printf("YES\n");
    }
    else
    {
      if(ans>=K)printf("YES\n");
      else printf("NO\n");
    }
   }
    return 0;
  }  
