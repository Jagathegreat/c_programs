#include<stdio.h>
int main()
{
   float n;
   int i;
   float sum=0;
   scanf("%f",&n);
  
   for(i=1;i<=n;i++)
   {
  
   	if(i==1)
   	{
   		 printf("1");
   		  	sum+=i;
	   }
    else if(i%2==0)
    {
        printf("-1/%d",i);
        sum=sum- 1.0/i;
    }else
    {
        printf("+1/%d",i);
        sum=sum+1.0/i;
    }

   } 
   printf("\n=sum of the series=%f",sum);
}
