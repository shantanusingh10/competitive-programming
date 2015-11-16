#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long T,F;
    scanf("%lld",&T);
    while(T--)
    {
        set<long long>A;
        long long i,N;
        scanf("%lld",&N);
        for(i=0;i<N;i++)
        {
         scanf("%lld",&F);
         A.insert(F);
        }
        cout<<A.size()<<endl;
    }
    return 0;
}
