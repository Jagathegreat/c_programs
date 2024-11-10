#include<stdio.h>
int main()
{
	char ch[100];
	int i,v=0,c=0,d=0,s=0;
	printf("enter the character");
	//scanf("%s",ch);
	gets(ch);
	//puts(ch);
	printf("%s\n",ch);
for(i=0;ch[i]!='\0';i++)
{
	if(ch[i]>='A' && ch[i]<='Z')
	   ch[i]+=32;
	   if(ch[i]>='a' && ch[i]<='z')
	   {
	   	      if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
	   	      {
	   	   	    v++;
			  }else
			  {
			  	c++;
			  }
		}
	   

}
    if(v>0)
   {
 	printf("it contain vowels"); 
   }else
   {
   	printf("it not contains vowels");
   }



}

