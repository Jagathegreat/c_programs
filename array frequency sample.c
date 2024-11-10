#include<stdio.h>
int main()
{
    int a[100],b[100]={0};
    int i,j,n,c=1;
    printf("enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if (b[i]!=-1)
    	{
        for(c=1,j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                b[j]=-1;}
                b[i]=c;
                
            
            
            
        }
    }
        
    }
    
    for(i=0;i<n;i++)
    {
    	if(b[i]!=-1)
    	{
		
        printf("%dprinted%dtimes\n",a[i],b[i]);
    }
    }
}
