#include<stdio.h>
#include<stdbool.h>
bool isleapyear(int y)
{ 
   if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
   {
	return true;
   }
   else
   {
   	return false;
	   }	
}
int main()
{ int x,y;
	printf("enter the year");
	scanf("%d",&y);
	x=isleapyear(y);
	if(x)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
}
