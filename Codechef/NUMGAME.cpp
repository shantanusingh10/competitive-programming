#include<iostream>
#include<cstdio>
#include<cmath>
#define R (3+2*sqrt(2))
 
using namespace std;
 
int main()
{
   long long T,N;
   scanf("%lld",&T);
   while(T--)
   {
         scanf("%lld",&N);
        if(N%2==1)
            printf("BOB\n");
        else
            printf("ALICE\n");
   }
  return 0;
}
