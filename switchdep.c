#include<stdio.h>
int main()
{ int id;
	printf("enter the id");
	scanf("%d",&id);
	switch(id)
	{
	case 11 ... 15: printf("software department");break;
	case 16 ... 20:printf("developer department");break;
	case 21 ... 23:	printf("management department");break;
	default :printf("no department assign");break;
	}
}
