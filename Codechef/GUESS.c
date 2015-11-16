#include<stdio.h>
#define MAX(a,b) a>b?a:b
 
long long gcd(long long a,long long b)
{
    if(a>=b)
    {
        if(a%b==0)
            return b;
        else
            return gcd(b,a%b);
    }
    else
    {
        if(b%a==0)
            return a;
        else
            return gcd(a,b%a);
    }
}
 
int main()
{
   long long T,i;
   long long int N,M;
   scanf("%lld",&T);
   while(T--)
   {
    scanf("%lld %lld",&N,&M);
    if(N==1 && M==1 )
    {
        printf("0/1\n");
    }
   else if(N%2!=1 || M%2!=1)
   {
       printf("1/2\n");
   }
   else if(N%2==1 && M%2==1)
   {
       int a = gcd(N*M-1,2*N*M);
       long long A = (N*M-1)/a;
       long long B = 2*N*M/a;
       printf("%lld/%lld\n",A,B);
 
   }
  }
   return 0;
}
