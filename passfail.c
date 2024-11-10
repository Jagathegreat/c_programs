#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,pass=0,fail=0;scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
	((sub1>=35)&&pass++);
	((sub2>=35)&&pass++);
	((sub3>=35)&&pass++);
	((sub4>=35)&&pass++);
	((sub5>=35)&&pass++);
	printf("%d\n%d\n",pass,5-pass);
	
}
