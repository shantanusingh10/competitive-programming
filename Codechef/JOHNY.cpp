#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
 
using namespace std;
 
int main()
{
    long long T,S,N;
    scanf("%lld",&T);
    while(T--)
    {
      vector<long long>A;
      scanf("%lld",&S);
      long long i,M;
      for(i=0;i<S;i++)
     {
        scanf("%lld",&N);
         A.push_back(N);
     }
      scanf("%lld",&M);
      M = A[M-1];
      sort(A.begin(),A.end());
 
      for(i=0;i<S;i++)
      if(A[i]==M)break;
 
      printf("%lld\n",i+1);
 
    }
 
return 0;
}
