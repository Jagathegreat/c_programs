// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[100],i,n,max;
    printf("enter no of elements u want to enter");
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);  
   }
   max=a[0];
   for(i=1;i<n;i++)
   { 
       if(max<a[i])
       max=a[i];
      
   }
   printf("maximum element %d",max);

    
}
