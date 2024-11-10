#include<stdio.h>
int arraysum(int a[100],int n)
{
	int s,i;
	for(i=0;i<n;i++)
	{
		s+=a[i];
	}
	return s;
}
int main()
{ int n,b,i,a[100];
	printf("enter size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b=arraysum(a,n);
	printf("%d",b);
	
	
}
