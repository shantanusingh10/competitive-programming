#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll T,i,N,M,j,c;
    scanf("%lld",&T);
    while(T--)
    {
         scanf("%lld %lld",&N,&M);
         ll B[N],mi=1000000,ma=-1;
         for(i=0;i<N;i++)B[i]=0;
         for(i=0;i<M;i++)
         {
             scanf("%lld",&c);
             mi=min(mi,c);
             ma = max(ma,c);
         }
         for(j=0;j<N;j++)
        {
             B[j]=max(abs(ma-j),abs(mi-j));
        }
         for(j=0;j<N;j++)
         {
             printf("%lld ",B[j]);
         }
         printf("\n");
    }
return 0;
}
