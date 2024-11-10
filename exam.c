#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch))
    {
        printf("digit");
    }
    else if(isalpha(ch))
    {
        printf("char");
    }
    else{
        printf("special char");
    }
}
