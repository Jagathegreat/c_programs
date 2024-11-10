#include<stdio.h>
int main()
{
	int n=5,i=0,s=0,avg;
	while(i<=n)
	{   
		if(i%2==0)
		{
			printf("even :%d\n",i); 
		}
		else
		{
			printf("odd:%d\n",i); 
			
		}
		s=s+i;
		i++;
		
	}
	avg=s/n;
	printf(" sum :%d\n",s);
	printf("avg :%d\n",avg);
	
}
