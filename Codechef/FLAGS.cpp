#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<string>
 
 
int main()
{
    long long T,N,A=0;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&N);
        A=0;
        if(N==1)
            printf("0\n");
        else if(N==2)
            printf("4\n");
        else if (N>=3)
        {
            A+= 2*N*(N-1)*(N-1);
            A+=N*(N-1)*(N-2);
            A+=2*N*(N-1)*(N-2)*(N-2);
 
            printf("%lld\n",A);
        }
    }
    return 0;
}
