#include<stdio.h>
 
int main()
{
   int T;
   signed int N,i,V,j;
   scanf("%d",&T);
   while(T--)
   {
     int max=0;
     scanf("%d",&N);
     signed int W[N];
     for(i=0;i<N;i++)
     {
       scanf("%d",&W[i]);
     }
     for(i=N-1;i>=0;i--)
     {
       if(i+W[i]>max)
       {
         max=i+W[i];
       }
     }
     printf("%d\n",max);
}
return 0;
}
