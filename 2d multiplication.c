#include<stdio.h>
int main()
{

int a[10][10],b[10][10],sub[10][10] ,n,r, c,k,s;

    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter %d elements of a:\n", n);
    for(r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
        	printf("elements [%d] [%d]",r,c);
            scanf("%d",&a[r][c]);
        }
    }
     printf("\nThe a matrix is:\n", n);
    for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            printf("%6d", a[r][c]);  
        }
        printf("\n");  
    }
    printf("Enter %d elements of b:\n", n);
     for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
        		printf("elements [%d] [%d]",r,c);
            scanf("%d", &b[r][c]);
        }
    }
  printf("\nThe b matrix is:\n", n);
    for (r = 0; r < n; r++) {
    for (c = 0; c < n; c++) {
            printf("%6d", b[r][c]);  
        }
        printf("\n");  
    }
    
   for(r=0;r<n;r++)
   {
   	for(c=0;c<n;c++)
   	 {
   		for(s=0,k=0;k<n;k++)
   		{
   		s+=a[r][k]*b[k][c];
		}
   		printf("%4d",s);
	 }
	   printf("\n");
   }
   printf("matrix multiplication");
    return 0;
}
