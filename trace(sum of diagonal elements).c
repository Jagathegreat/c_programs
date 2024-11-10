#include<stdio.h>
int main()
{

int a[10][10],n,r,c,s=0;

    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter %d elements of a:\n", n);
    for(r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
        	printf("elements [%d] [%d]",r,c);
            scanf("%d",&a[r][c]);
            if(r==c)
            {
            	s+=a[r][c];
			}
        }
    }
     printf("\nThe matrix is:\n", n);
    for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            printf("%6d", a[r][c]);  
        }
        printf("\n");  
    }
    printf(" trace %d",s);
    
}
