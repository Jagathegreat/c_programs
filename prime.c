#include<stdio.h>
int main()
{
	int a,j;
	printf("enter the number");
	scanf("%d",&a);
	int flag=0;
	int i=0;
	for(j=1;j>=20;j++)
	{
	for(i=1;i<=j;i++)
	{
		
	
		if (j%i==0){
			
		
		 flag++;
	}	 
	}
}
	if (flag==2)
	{
		printf("%d",j);
	}
	else
	{
		printf("a is not prime number");
	}
}
