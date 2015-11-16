#include<stdio.h>
int main()
{
  int i,sum,T;
  char arr[100];
  scanf("%d",&T);
 while(T--)
  {
      sum=0;
      scanf("%s",arr);
      for(i=0;arr[i]!='\0';i++)
      {
      if((arr[i]=='A')||(arr[i]=='D')||(arr[i]=='O')||(arr[i]=='P')||(arr[i]=='Q')||(arr[i]=='R'))
        sum=sum+1;
      else if(arr[i]=='B')
        sum=sum+2;
      }
  printf("%d\n",sum);
  }
  return 0;
}
