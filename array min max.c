#include <stdio.h>
int main() {
  int a[100],c1=0,c2=0,c3=0,b[100];
  int n,i;
  printf("enter the array size");
  scanf("%d",&n);
  printf("enter %d elements",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      if(a[0]<a[i]){
          a[0]=a[i];
      }
      b[i]=a[i];
      if(b[0]>b[i]) {
         b[0]=b[i];
         }
  }
  printf("MAX:%d,min:%d",a[0],b[0]);
}
