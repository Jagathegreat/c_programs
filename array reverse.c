#include <stdio.h>

int main() {
    int n,i,a[100],c=0,j,k;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
      }
      printf("reverse is");
 /*for(n--;n>=0;n--)
 {
 printf(" %d ",a[n]);
 }*/
 for(i=n-1;i>=0;i--)
 {
 	printf("%d",a[i]);
 }
   	
 }
