#include<stdio.h>
void swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("%d ",a);
printf("%d ",b);	
} 
int main()
{   int a,b,c,d;
	printf("enter the 1st number");
	scanf("%d",&a);
	printf("enter the 2nd number");
	scanf("%d",&b);
	printf("before swapping %d %d\n",a,b);
	
	printf("after swapping ");
	swap(a,b);
	
	
}
/*
#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a, b;
    
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    
    printf("Before swapping: %d %d\n", a, b);
    
    // Swap values
    swap(&a, &b);
    
    printf("After swapping: %d %d\n", a, b);
    
    return 0;
}
*/
