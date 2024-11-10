/* 1  2  3  4  5
 10  9  8  7  6
 11 12 13 14 15
 20 19 18 17 16
#include<stdio.h>
int main()
{
	int i,j,a=1;
	for(i=1;i<=4;i++)
	{ 
	    for(j=1;j<=5;j++)
        	{
        		if(i%2!=0)
				{
        		printf("%3d",a++);
					
				}
				else
				{
					printf("%3d",--a);
				}
		     
		
		    }
		    a=a+5;
		    
			printf("\n");	
	}
}*/
/*1   6   11   16  
2   7   12   17
3   8   13   18
4   9   14   19
5   10  15   20
*/
/*
#include<stdio.h>
int main()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{  a=i;
	    for(j=1;j<=4;j++)
        	{
        		printf("%3d",a);
        		a+=5;
        	}
        	
        	printf("\n");
   }
}
*/
/* 1 10 11 20
  2  9 12 19
  3  8 13 18
  4  7 14 17
  5  6 15 16
*/

#include <stdio.h>

int main() {
    int nr,nc,r,c,a,z=1;
    printf("Enter the number of rows: ");
    scanf("%d", &nr);
    printf("Enter the number of columns: ");
    scanf("%d", &nc);
    int b=nr*2-1;
    for(r=1;r<=nr;r++){
    a=r;
    for(c=1;c<=nc;c++){
        if(c%2!=0)
        {
            printf("%3d",a);
            a=a+b;
        }
        else{
            printf("%3d",a);
            a=a+z;
        }
    }
    b-=2;
    z+=2;
    printf("\n");
    }
    return 0;
}
/*
A  B  C  D  
B  C  D  E  
C  D  E  F  
D  E  F  G 
#include<stdio.h>
int main()
{
	int r,c,nr,nc,a=0;
	printf("enter the no of rows");
	scanf("%d",&nr);
	printf("enter the no of cols");
	scanf("%d",&nc);
	for(r=1;r<=nr;r++){
		a=r;
		for(c=1;c<=nc;c++){
			printf("%c  ",a+64);
			a++;
		}
		printf("\n");
	}
	
}
*/
/*

A  E  I  M
B  F  J  N
C  G  K  O
D  H  L  P

#include<stdio.h>
int main()
{
	int r,c,nr,nc,a=0;
	printf("enter the no of rows");
	scanf("%d",&nr);
	printf("enter the no of cols");
	scanf("%d",&nc);
	for(r=1;r<=nr;r++){
		a=r;
		for(c=1;c<=nc;c++){
			printf("%c  ",a+64);
			a+=nr;
		}
		printf("\n");
	}
	return 0;
}*/
