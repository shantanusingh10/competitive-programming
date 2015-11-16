#include<stdio.h>
 
int main()
{
   long long int a;
   scanf("%lld",&a);
 
   if((a-1)%6==0 || a%3==0)
   printf("yes");
   else
   printf("no");
    return 0;
}
