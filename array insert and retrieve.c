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
    for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
	}
}
