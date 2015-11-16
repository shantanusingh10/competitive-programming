#include<stdio.h>
 
int main()
{
    long long int N,i,sum=0,A;
    
    scanf("%lld",&N);
    
    long long int C[N];
    
    for(i=0;i<N;i++)
    {
                    scanf("%lld",&C[i]);
    }
    for(i=0;i<N;i++)
    {
                    sum=sum+C[i];
    }
    A=N*(N+1)/2;
    if (sum==A)
    printf("YES");
    else 
    printf("NO");
    return 0;
}
