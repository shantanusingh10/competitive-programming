#include<iostream>
#include<cmath>
using namespace std;
 
 
int main()
{
    int T;
    scanf("%d",&T);
    int H,M,h;
    float x;
    while(T--)
    {
              scanf("%d",&h);
              scanf("%d",&M);
              
              if(h<=23 && h>=0 && M>=0 && M<60)
              {
                       H = h%12;
                       x = 6*M-30*H-M/2.0;
                       if(x<0 && abs(x)<180)
                       printf("%0.1f\n\n",abs(x));
                       else if(x<0 && abs(x)>=180)
                       printf("%0.1f\n\n",360+x);
                       else if(x>0 && abs(x)>=180)
                       printf("%0.1f\n\n",360.0 - x);
                       else if(x>0 && abs(x)<180)
                       printf("%0.1f\n\n",abs(x));
                       else
                       printf("0.0\n\n");
              }
              
              else 
              printf("Invalid Time\n\n");
    }
    return 0;
}
