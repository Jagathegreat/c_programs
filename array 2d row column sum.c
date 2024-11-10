	#include<stdio.h>
int main()
{
 int a[10][10],n,r,c,s=0,k=-1,m,j;
 printf("Input the size of the square matrix ");
 scanf("%d",&n);
 printf("Input %d elements in the first matrix\n",n*n);
 for(r=0;r<n;r++)
 {
 	for(c=0;c<n;c++)
 	{
	printf("elemeants[%d][%d]=",r,c);scanf("%d",&a[r][c]);
	 }
 }
 for(r=0;r<n;r++)
 {
     for(c=0;c<n;c++)
     {
         printf("%d",a[r][c]);
     }
     printf("\n");
 }
 printf("The sum or rows and columns of the matrix is\n");
 for(r=0;r<=n;r++)
 {
 	s=0;
 	if(r==n)
 	 {
 	 	
 	 	for(m=0;m<n;m++)
 	 	  {
 	      s=0;
 	 	  k++;
 	 		for( j=0;j<n;j++)
 	 		  {
 	 			s+=a[j][k];
			  }
			  
			  printf("%4d",s);
		  }
 		return 0;
	 }
     for(c=0;c<n;c++)
         {
       printf("%4d",a[r][c]);s+=a[r][c];
         }
     printf("%4d",s);
     printf("\n");
 }	
}
