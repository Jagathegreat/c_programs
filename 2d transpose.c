#include<stdio.h>
int main()
{

int a[10][10],b[10][10],sub[10][10] ,n,r, c;

    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter %d elements of a:\n", n);
    for(r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
        	printf("elements [%d] [%d]",r,c);
            scanf("%d",&a[r][c]);
        }
    }
     printf("\nThe matrix is:\n", n);
    for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            printf("%6d", a[r][c]);  
        }
        printf("\n");  
    }
     printf("\nThe transpose of matrix is:\n", n);
    /*for (c = 0; c < n; c++) {
        for (r = 0; r < n; r++) {
            printf("%6d", a[r][c]);  
        }
        printf("\n");  
    }*/ for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            printf("%6d", a[c][r]);  
        }
        printf("\n");  
    }
   
  
    return 0;
}
