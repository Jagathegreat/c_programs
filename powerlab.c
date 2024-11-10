#include<stdio.h>
int main()
{
    int b,p,pwr=1,i,j;
    printf("enter the number base and power");
    scanf("%d %d",&b,&p);
    for(j=0;j<p;j++)
    {
    for(i=1;i<=3;i++)
    {
        pwr=b*pwr;
    }
    printf("%d base %d power %d ",b,p,pwr);
  }  
}
