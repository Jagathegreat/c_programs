#include<stdio.h>
int main()
{
	char a[20],b[20];
	int c,d;
	puts("enter the  1st name");
	gets(a);
	puts("enter 1st score");
	scanf("%d",&c);
	puts("enter 2nd name");
//	gets(b);
//	gets( b);
scanf(" %s",&b);
	puts("enter 2nd score");
	scanf("%d",&d);
	switch(c>d)
	{
		case 0:printf("%s win by %d",b,d-c);break;
		case 1:printf("%s wins by  %d",a,c-d);break;
		default :printf("both scores are equal");break;
		return 0;
		
	}
	
	
	
	
	
}
