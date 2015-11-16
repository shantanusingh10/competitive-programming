#include<stdio.h>
int main()
{
    float mon;
    int withd;
    
    scanf("%d",&withd);
    scanf("%f",&mon);
    if (mon>=0 && mon<=2000)
    {if(mon>=withd+0.5 && withd%5==0 && withd<=2000 && withd>0)
    printf("%0.2f",mon-withd-0.5);
    else 
    printf("%0.2f",mon);}
    return 0;
