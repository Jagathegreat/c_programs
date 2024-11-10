#include <stdio.h>

int main() {
    int n,i,a[100],count,j;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d elements: ",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //0 1 2 3 4 5 6
    //1 5 1 2 4 2 3
    for(i=0;i<n;i++)//i = 1
    { 
		count=0; // c = 1
    	for(j=0;j<n;j++) // j = 0
    	{
    		if(a[i]==a[j])
				count++;
	    
		}
		if(count==1)
	    {
	    	printf("%d ",a[i]);
		}
		}
	}


	
	

