#include<stdio.h>
int main()
{
    int a,y,m,d;
    printf("enter in days");
    scanf("%d",&a);
    y=a/365;
    m=(a%365)/30;
    d=(a%365)%30;
    printf("year=%d,month=%d,day=%d",y,m,d);
}
