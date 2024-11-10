// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[100],i,n,j;
    printf("enter no of elements u want to enter");
    scanf("%d",&n);
    printf("the %d elements",n);
    
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]); 
   }
   for(i=0;i<=n-2;i++)
   {
       for(j=0;j<=n-i-2;j++)
       {
         if(a[j]<a[j+1])
         {
             int t=a[j];
             a[j]=a[j+1];
             a[j+1]=t;
         }
       }
   }
   printf("sorted elements");
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }

    
}
