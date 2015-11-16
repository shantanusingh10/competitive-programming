#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
   long long i,T,N,p=0;
   scanf("%lld",&T);
   while(T--)
   {
      vector<long long> A;
      scanf("%lld",&N);
      for(i=0;i<N;i++)
      {
         scanf("%lld",&p);
         A.push_back(p);
      }
     sort(A.begin(),A.end());
     p=0;
     for(i=1;i<N;i++)
     {
       p=p+A[0]*A[i];
     }
     printf("%lld\n",p);
   }
return 0;
}
