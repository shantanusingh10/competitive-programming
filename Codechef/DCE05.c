#include<stdio.h>
 
int main()
{
  long long int T,A;
  scanf("%lld",&T);
  while(T--)
  {
    scanf("%lld",&A);
    long long int y=A;
 
    y = y |(y>>1);
    y = y |(y>>2);
    y = y |(y>>4);
    y = y |(y>>8);
    y = y |(y>>16);
    y = y |(y>>32);
 
    y = (y+1)>>1;
    printf("%lld\n",y);
  }
  return 0;
}
