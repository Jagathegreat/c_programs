#include <stdio.h>
int main() 
{ int n,i,j;
scanf("%d",&n);
    for(i=n;i>=1;i--)
    { char ch='E';
     
        for(j=1;j<=i;j++)
        {
         printf("%c",ch);
         ch--;
        } printf("\n");
    }
}
// Online C compiler to run C program online
#include <stdio.h>
int main() 
{ int n,a=64,b;
scanf("%d",&n);
b=n+a;
a=b;
    for(int i=n;i>=1;i--)
    { a=b;
        for(int j=1;j<=i;j++)
        {
       printf("%3c",a--);
   
         
         
        } printf("\n");
    }
}
0
01
011
0112
01123
#include <stdio.h>

int main() {
int r,c,nr,nc;
printf("enter the no of rows");
scanf("%d",&nr);
printf("enter the no of cols");
scanf("%d",&nc);
for(r=1;r<=nr;r++)
{
    int a=0,a2=1,a3;
    for(c=1;c<=r;c++){
        printf("%d",a);
        a3=a+a2;
        a=a2;
        a2=a3;
    }
    printf("\n");
}
    return 0;
}

* * * * * 
* * * * 
* * * 
* * 
* 

#include <stdio.h>
int main() 
{ int n,a=0;
scanf("%d",&n);
    for(int i=5;i>=1;i--)
    { 
        for(int j=1;j<=i;j++)
        {
         printf("* ");
         
         
        } printf("\n");
    }
}
  1    2    3    4    5
    6    7    8    9
   10   11   12
   13   14
   15
#include <stdio.h>
int main() 
{ int n,a=1;
scanf("%d",&n);
    for(int i=5;i>=1;i--)
    { 
        for(int j=1;j<=i;j++)
        {
         printf(" %4d",a++);
         
         
        } printf("\n");
    }
}
