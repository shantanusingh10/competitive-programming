#include<stdio.h>
 
int main()
{
  int T;
  scanf("%d",&T);
  while(T--)
  {
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    double A1,A2;
    A1=sqrt(a*a + b*b);
    A2=sqrt(b*b - a*a);
    printf("%0.5lf %0.5lf\n",A2,A1);
  }
  return 0;
}
