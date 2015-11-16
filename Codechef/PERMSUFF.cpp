#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include <iomanip>
#include <cmath>
#include <map>
 
#define ll long long
#define pi 3.1415926536
#define PB push_back
using namespace std;
 
int main()
{
   ll T,i,N,M;
   scanf("%lld",&T);
   while(T--)
   {
       scanf("%lld %lld",&N,&M);
       ll B[N],C[N];
       vector<pair<ll,ll> >A;
       for(i=0;i<N;i++)
       {
           scanf("%lld",&B[i]);
           B[i]--;
       }
       for(i=0;i<M;i++)
       {
           ll a,b;
           scanf("%lld %lld",&a,&b);
           a--;b--;
           A.PB(make_pair(a,b));
       }
       sort(A.begin(),A.end());
       ll l = A[0].first,r = A[0].second;
       for(i=1;i<M;i++)
       {
           if(r>=A[i].first)r=max(r,A[i].second);
           else {sort(B+l,B+r+1);l=A[i].first;r=A[i].second;}
       }
       sort(B+l,B+r+1);
       int f=0;
       for(i=0;i<N;i++)
       {
           if(B[i]!=i){printf("Impossible\n");;f=1;break;}
       }
       if(f==0)
      printf("Possible\n");// cout<<"Possible"<<"\n";
   }
    return 0;
}
