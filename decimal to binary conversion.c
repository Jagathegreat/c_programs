#include <stdio.h>

int main()
 {
    int n,i,a[16]={0};
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;n!=0;n=n/2,i++)
    {
    	a[i]=n%2;
	}
    for(i=15;i>=0;i--)
    {
    	printf("%d",a[i]);
	   }   
}
