#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,ch;
	
	for(i=1;i<=10;i++)
	{ ch+=64+26;
		for(j=1;j<=26;j++)
		{
			if(i%2==0)
			{
			printf("%3c",j+96);
			}
			else
			{
			printf("%3c",ch--);	
			}
		}
		printf("\n");
	}
	
}
