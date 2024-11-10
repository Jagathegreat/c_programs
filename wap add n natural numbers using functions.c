#include<stdio.h>
int naturalnumbersum(int a)
{ int b=0; 
  while(a)
{ 
	b+=a;
	a--;
	
	}
	return b;
   		
} 
int main()
{   int a,result;
	printf("enter the number");
	scanf("%d",&a);
	result=naturalnumbersum(a);
	printf("%d",result);
	
}
