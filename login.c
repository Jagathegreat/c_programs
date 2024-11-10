#include<stdio.h>
int main()
{
	char username[20],name[20];
	char pwd[20],userpwd[20];
	char captcha[10],c[10];
	puts("first signup with username and password login");
	puts("enter email username");
	gets(username);
	puts("enter password");
	gets(pwd);
	puts("enter captcha");
	gets(captcha);
	puts("user name deatails is saved");
	printf("enter loginid:%s\n",name);
	gets(name);
	if(strcmp(name,username)==0)
	{printf("enter password:%s\n",userpwd);
	gets(userpwd);
		if(strcmp(pwd,userpwd)==0)
		{puts("enter captcha");
	     gets(c);
		  if(strcmp(captcha,c)==0)
		  {
		  	printf("you logined into page succesfully");
		  	printf("welcome to isrtc");
		  }
		  else{printf("incorrect captcha");
		  }		
		}
		else{printf("incorrect password try again");
		}
	}
	else
	{printf("invalid username ");
	}
	
}
