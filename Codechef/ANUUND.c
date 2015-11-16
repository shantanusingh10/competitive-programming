#include<stdio.h>
 
int main()
{ int T;
  scanf("%d",&T);
  long long int N;
  while(T--)
  {
    scanf("%lld",&N);
    long long int A[N],i,h;
    for(i=0;i<N;i++)
    scanf("%lld",&A[i]);
      for(i=0;i<N-1;i++)
      {
        if(i%2==0)
        {
          if(A[i]>A[i+1])
          {
           h = A[i];
           A[i]=A[i+1];
           A[i+1]=h;
          }
        }
      if(i%2!=0)
      {
        if(A[i]<A[i+1])
        {
          h = A[i];
          A[i]=A[i+1];
          A[i+1]=h;
        }
      }
      }
      for(i=0;i<N;i++)
       printf("%lld ",A[i]);
      printf("\n");
    }
  }
