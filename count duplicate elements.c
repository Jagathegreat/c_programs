#include <stdio.h>

int main() {
    int n,i,a[100],c,j,total=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { c=1;
    	for(j=i+1;j<n;j++)
    	{
    	if(a[i]==a[j])
		c++;	
		}
		if(c==2)
	      {
	        total++;
	      }
	}
	
	printf("duplicate elements %d",total);
	
}
