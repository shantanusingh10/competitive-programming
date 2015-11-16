#include<bits/stdc++.h>
using namespace std;
int A[32500];
vector<long long>B;
void sieve()
{
   long long i,j;
    for(i=0;i<32500;i++)A[i]=1;
  A[0]=0;
  A[1]=0;
  for(i=2;i<=sqrt(32500);i++)
  {
     if(A[i])
     {
         for(j=2;j*i<=32500;j++)
           A[i*j]=0;
      }
  }
}
 
int main()
{
    sieve();
  long long C,N,i,M,T;
  for(i=0;i<32500;i++)
  {
      if(A[i]==1)B.push_back(i);
  }
  scanf("%lld",&T);
  while(T--)
 {
  scanf("%lld %lld",&N,&M);
  if(N==1)N++;
  for(;N<=M;N++)
  {
     long long S=sqrt(N);
     C=0;
    for(i=0;B[i]<=S;i++)
     if(N%B[i]==0){C=1;break;}
    if(C==0)printf("%lld\n",N);
  }
 }
return 0;
}
