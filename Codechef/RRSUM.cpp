#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long N,M,q,Q;
    scanf("%lld %lld",&N,&Q);
    while(Q--)
    {
        long long ans;
        scanf("%lld",&q);
        if(q<(N+2))
            ans = 0;
            else if(q<=2*N+1)ans=(q-N-1);
            else ans=3*N+1-q;
            cout<<ans<<endl;
    }
 
    return 0;
}
