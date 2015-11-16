#include<iostream>
#include<string>
#include<cstdio>
 
using namespace std;
 
int main()
{
   long long T,i,b,N;
   scanf("%lld",&T);
   while(T--)
   {
     string A;
     scanf("%lld",&N);
     b = 0;
     cin>>A;
     for(i=0;i<N;i++)
        {if(A[i]=='1') b++;}
 
     printf("%lld\n",(b*b+b)/2);
   }
return 0;
}
