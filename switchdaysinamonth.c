#include<stdio.h>
int main()
{
	int m;
	printf("enter months number");
	scanf("%d",&m);
	switch(m)
	{
	case 1:puts("31 days"); break;
	case 2:puts("28 or 29 days"); break;
    case 3:puts("this is 30 days"); break;
    case 4:puts("31 days"); break;
    case 5:puts("this is 30 days"); break;
    case 6:puts("31 days"); break;
    case 7:puts("31 days"); break;
    case 8:puts("this is 30 days"); break;
    case 9:puts("this is 30 days"); break;
    case 10:puts("31 days"); break;
    case 11:puts("30 days"); break;
    case 12:puts("31 days"); break;
    default :puts("monts invalid");break;
		
	}
	
}
