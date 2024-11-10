// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,i,j;
   printf("Enter the elements");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++)
    {
        int c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=-1;
                c++;
            }
        }
        if(a[i]!=-1)
        {
            printf("%d frequency occurs %d times\n",a[i],c);
        }
    }

    return 0;
}
