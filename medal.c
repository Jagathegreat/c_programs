#include<stdio.h>
int main()
{
int a,b,c,d,e;
int gold=0,silver=0;
printf("enter marks for 5 rounds");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
(a>5)&&gold++;
(b>5)&&gold++;
(c>5)&&gold++;
(d>5)&&gold++;
(e>5)&&gold++;
printf("the number of gold is %d",gold);
printf("thenumber of silver is %d",5-gold);
}
