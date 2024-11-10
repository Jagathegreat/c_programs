#include<string.h>
#include<ctype.h>
int main() {
char s1[100],s2[100],s3[100];
char c;
int i,j=0;
int in1,in2;
printf("enter the string1 name : ");
gets(s1);
printf("enter the starting index no : ");
scanf("%d",&in1);
printf("enter the ending index no : ");
scanf("%d",&in2);
for (int i = in1; i <= in2; i++) {
        if (in1 >= 0 && in2 >= in1 ){
         s1[i] = toupper(s1[i]); }
}
printf("%s",s1);
return 0;
}
