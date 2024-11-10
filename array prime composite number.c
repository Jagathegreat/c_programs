#include <stdio.h>

int main() {
    int n,i,a[100],c=0,j;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   if(a[i]==0||a[i]==1)
       {
    	printf("1 and 0 are nor prime nnor composite");
     	}
     	else{
    	for(c=0,j=1;j<=a[i];j++)
    	{ 
    	
    	if(a[i]%j==0)
		    {
			c++;
			
			}		
		}
		}(c==2)?printf("%d is prime number\n",a[i]):printf("%d is composite number\n",a[i]);
    }
	
	
}
