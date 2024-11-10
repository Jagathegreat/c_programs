#include<stdio.h>
int main()
{
	int day=2;
	switch(day)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday \n");
			break;
		case 5:
		printf("wednesday");
		break;	
	}
	if(day<1)
	{
		printf("incorrect day\n");
	}
	else if(day>0)
	{
		printf("incorrect\n");
	}
	else
	{
		printf("correct day");
	} 
	int countdown = 3;

   while (countdown > 0) 
    {
  printf("%d\n", countdown);
  countdown--;
    }

printf("Happy New Year!!\n");
	
	

int dice = 1;
while (dice<= 6) {
  if (dice < 6)
   {
    printf("No Yatzy\n");
  } else 
  {
    printf("Yatzy!\n");
  }
  dice = dice + 1;
}
}
