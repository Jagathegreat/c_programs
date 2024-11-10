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
 for(j=0;j<n;j++)
 {
 	if(a[j]==a[j+1])
 	  c++;
 	  printf("%d is print %d times",a[j],c);
 }
    printf("duplicate elements %d",c);	
 }

