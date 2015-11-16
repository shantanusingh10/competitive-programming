#include<iostream>
#include<cstdio>
 
long long mod(long long x)
{
  if(x<0)
  return -x;
  else
  return x;
}
 
int main()
{
  long long T,x,y,b,c,d,ans;
  scanf("%lld",&T);
  while(T--)
  {
    scanf("%lld %lld",&x,&y);
    x = mod(x);
    y = mod(y);
    if(x==y)
    printf("%lld\n",x+y);
    else if(x>y)
    {
     b = x-y; c=b/2; d = b-c; ans = 2*y + c +3*d;
     printf("%lld\n",ans);
    }
    else
    {
     b = y-x; c=b/2; d = b-c; ans = 2*x + d +3*c;
     printf("%lld\n",ans);
     }
  }
return 0;
}
