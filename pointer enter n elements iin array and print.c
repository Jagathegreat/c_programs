#include<stdio.h>
int main()
{
	int n,a[100],i,*p;
	//p=a;
	//p=&a;
	p=&a[0];
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%delements%d\n",i,*(p+i));
	}	
}
