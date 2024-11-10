/*
1  1  1  1  1
2  2  2  2  2
3  3  3  3  3 
4  4  4  4  4
5  5  5  5  5
*/
/*#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5;c++)
		{
			printf("%d",r);
		}
		printf("\n");
	}
}*/
/*
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
*/
/*#include<stdio.h>
int main()
{
	int r,c,a;
	for(r=1;r<=5;r++)
	{  
		for(c=5;c>=1;c--)
		{
			printf("%3d",c);
		}
		printf("\n");
	}
}*/
/*1   2   3   4   5
6   7   8   9   10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25*/
/*#include<stdio.h>
int main()
{
	int r,c,a=1;
	for(r=1;r<=5;r++)
	{ 
		for(c=1;c<=5;c++)
		{
			printf("%3d ",a++);
			
			
		}
		
		printf("\n");
	}
}*/
/*1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9
*/
/*#include<stdio.h>
int main()
{
	int r,c,a=1;
	for(r=1;r<=5;r++)
	{ a=r;
		for(c=1;c<=5;c++)
		{
			printf("%3d ",a++);
			
			
		}
		
		printf("\n");
	}
}
*/
/*
1   2   3   4   5  
2   4   6   8   10
3   6   9   12  15
4   8   12  16  20*/
/*
#include <stdio.h>

int main() {int a,b=1;
    for(int i=1;i<=5;i++)
    { a=i;
        for(int j=1;j<=5;j++)
        {
            printf("%3d",a);
            a=a+b;
            
        }
        b++;
        printf("\n");
    } 
    

    return 0;
}
*/
/*
1  1  1  2  1  3
2  1  2  2  2  3
3  1  3  2  3  3
4  1  4  2  4  3*/
#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{ 
		for(c=1;c<=6;c++)
		{
		if(c%2==0)
		{
		printf("%d",(c/2));
			
		}
		else
		{
		printf("%d",r);	
		}
			
			
		}
		
		printf("\n");
	}
}
/*1 2 3 4
4 3 2 1
1 2 3 4
4 3 2 1
#include<stdio.h>
int main()
{
	int r,c,nr,nc,a;
	printf("enter the number of rows and columns");
	scanf("%d %d",&nr,&nc);
	for(r=1;r<=nr;r++)
	{ a=nc;
		for(c=1;c<=nc;c++)
		{
			if(r%2==0)
			{
				printf("%d",a--);
			}
			else
			{
				printf("%d",c);
			}
		}
		printf("\n");
	}
}*/












