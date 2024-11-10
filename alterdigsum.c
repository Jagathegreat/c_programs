#include<stdio.h>
int main()
{
	int r,s1=0,s2=0,n,i=1;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
	if(i%2==1)
	{
		s1=s1+r;
	}
	else
	{
		s2=s2+r;
	}
	i++;  
	n=n/10;}
	if(s1==s2)
	{
		printf("same");
	}
	else{printf("not same");
}
	
}
/*while(n!=0)
    {
        a=n%10;
        s1=s1+a;
        n=n/10;
        b=n%10;
        s2=s2+b;
        n=n/10;
    }
    (s1==s2)?printf("sidits sum same"):("notsame");*/
