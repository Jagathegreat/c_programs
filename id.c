#include<stdio.h>
int main()
{
	int id = 101,pwd = 3555,id2,pwd2;
	
	
	printf("enter id");
	scanf("%d",&id2);
	
	switch(id==id2)
	{
		case 0: printf("invalid id ");break;
		case 1: 
		printf("enter password");
		scanf("%d",&pwd2);
		switch(pwd == pwd2){
			case 1: printf("\nWelcome Sir");break;
			default: printf("invalid pasword");
		}
		
		
	}
	
	
	
}
