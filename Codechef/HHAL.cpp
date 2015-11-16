#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdio>
 
#define ll long long
#define PB push_back
using namespace std;
 
 
int main()
{
   ll T,i;
   cin>>T;
   string S;
   while(T--)
   {
       cin>>S;
   int f=1;
   for(i=0;i<S.size()/2;i++)
   {
       if(S[i]!=S[S.size()-i-1]){f=0;break;}
   }
   if(f==0)cout<<"2"<<endl;
   else cout<<"1"<<endl;
   }
   return 0;
}
