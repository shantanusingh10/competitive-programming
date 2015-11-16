#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<map>
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
using namespace std;
vector<PII> V[100005];
map<int,int> my;
int maxsel(vector<PII> acts)
{
    int sz = acts.size();
    if(sz==0) return 0;
    sort(acts.begin(),acts.end());
 
    int st = acts[0].first,ans=1;
    for(int i=1;i<sz;i++)
    {
        if(acts[i].second>=st)
        {
            ans++;
            st = acts[i].first;
        }
    }
    return ans;
}
int main()
{
    int T,S,F,N,P,K;
    scanf("%d",&T);
    while(T--)
    {
        my.clear();
        int pos=0;
        scanf("%d %d",&N,&K);
        if(N==0)
        {printf("0\n"); continue;}
        for(int i=0;i<=N;i++)
            V[i].clear();
 
        for(int i=0;i<N;i++)
        {
            scanf("%d %d %d",&S,&F,&P);
            P--;
            if(my.count(P)==0)
            {
                my[P]=pos++;
            }
            V[my[P]].PB(MP(F,S));
        }
        int ans=0;
        for(int i=0;i<pos;i++)
        {
            ans += maxsel(V[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
