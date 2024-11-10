#include <stdio.h>

int main() {
    int n,i,a[100],c=0,j,k,b[100],t;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("first array");
    for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("second array");
    for(i=0;i<n;i++)
    {
    	b[i]=a[i];
    	printf("%d ",b[i]);
	}
	
}
