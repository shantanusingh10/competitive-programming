#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  long long T,x,y;
  scanf("%lld",&T);
  while(T--)
  {
    scanf("%lld %lld",&x,&y);
    if(y>0)
    {
      if(x<=y-1 && x+y>=0 && y%2==0)printf("YES\n");
      else if(x>0 && x%2==1 && y<=x+1)printf("YES\n");
      else if(x<=0 && abs(x)%2==0 && y<=abs(x))printf("YES\n");
      else printf("NO\n");
    }
    else if(y==0)
    {
      if(x>0 && x%2==1)printf("YES\n");
      else if(x<=0 && abs(x)%2==0)printf("YES\n");
      else printf("NO\n");
    }
    else
    {
     if(abs(y)%2==0 && x<=abs(y)+1 && x>=y)printf("YES\n");
     else if(x>0 && x%2==1 && abs(y)+1<=x)printf("YES\n");
     else if(x<=0 && abs(x)%2==0 && x<=y)printf("YES\n");
     else printf("NO\n");
    }
  }
return 0;
}
