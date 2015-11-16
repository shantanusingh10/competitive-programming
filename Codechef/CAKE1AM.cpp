#include<iostream>
#include<cstdio>
using namespace std;
 
long long A(long long x1,long long y1,long long x2,long long y2)
{
   return (x2-x1)*(y2-y1);
}
 
int main()
{
  long long T;
  scanf("%lld",&T);
  while(T--)
  {
     long long x[4],y[4],i,R;
     for(i=0;i<4;i++)
     scanf("%lld %lld",&x[i],&y[i]);
 
     if(max(x[0],x[2])<min(x[1],x[3]) && max(y[0],y[2])<min(y[1],y[3]))
     {
        R = A(x[0],y[0],x[1],y[1]) + A(x[2],y[2],x[3],y[3]) - A(max(x[0],x[2]),max(y[0],y[2]),min(x[1],x[3]),min(y[1],y[3]));
     }
     else
      R = A(x[0],y[0],x[1],y[1]) + A(x[2],y[2],x[3],y[3]);
     printf("%lld\n",R);
  }
  return 0;
}
