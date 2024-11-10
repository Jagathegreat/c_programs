#include<stdio.h>
int main()
{
	int m;
	printf("enter the alphabet\n");
	scanf("%c",&m);
	if(m>'a'&&m<'z' || m>'A'&&m<'Z')
	{
	switch(m)
	{
		case 'a':puts("vowel");break;
		case 'e':puts("vowel");break;
		case 'i':puts("vowel");break;
		case 'o':puts("vowel");break;
		case 'u':puts("vowel");break;
		case 'A':puts("vowel");break;
		case 'E':puts("vowel");break;
		case 'I':puts("vowel");break;
		case 'O':puts("vowel");break;
		case 'U':puts("vowel");break;
		default : puts("consonants");break;
	}
}
else 
{ printf("this is not a alphabet");
}
}
