// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,sum=0,a[100];
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("elements sum %d",sum);
    
}
