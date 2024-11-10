#include <stdio.h>

int main() 
{
    int n,i,a[100],temp;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
    temp=a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=temp;	
	}
	for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    /*for(n--;n>=0;n--)
    {
    printf("%d",a[i]);
    }*/
}
