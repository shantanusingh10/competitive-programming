#include<iostream>
using namespace std;
 
int main()
{
    
    int T,x,y,m,j;
    scanf("%d",&T);
    while(T--)
    {
              m=0;
              int i;
     scanf("%d",&x);
     scanf("%d",&y);
     for(i=1;;i++)
     {
                 for(j=2;j<x+y+i;j++)
                 {
                  if((x+y+i)%j==0)
                 break;
                 }
                 if (j==x+y+i)
               { printf("%d\n",i);
                 break;
                 }
     }
     
     
              
              
              
    }
    return 0;
}
