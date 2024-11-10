#include<stdio.h>
int main()
{
	char ch[100];int i,c=0;
	printf("enter the character");
	//scanf("%s",ch);
	gets(ch);
	for(i=0;ch[i]!='\0';i++);
	//puts(ch);
	printf("%s\n",ch);
	printf("reverse\n");
while(i)
{
	printf("%c",ch[--i]);
}
return 0;
}
