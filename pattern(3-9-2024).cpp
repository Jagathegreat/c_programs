/*enter number of rows5
* * * * *
*       *
*       *
*       *
* * * * *

// Online C compiler to run C program online
#include <stdio.h>
int n;
int main() {printf("enter number of rows");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(i==1||i==n||j==1||j==n)
        {
        printf("* ");
        }
        else
        {
            printf("  ");
        }
    }printf("\n");
}
}*/
/*enter number of rows5
 0 1 1 1 0
 1 0 1 0 1
 1 1 0 1 1
 1 0 1 0 1
 0 1 1 1 0
 
  #include <stdio.h>
int n,a,i,j;
int main() {printf("enter number of rows");
scanf("%d",&n);
for( i=1;i<=n;i++)
{ a=n;
    for(j=1;j<=n;j++)
    {
        
       if(i==j||i+j==n+1)
       {
           printf(" 0");
       }else
       {
           printf(" 1");
       }
       
    }printf("\n");
}
}
*/
/*
enter number of rows5
* 
* * 
* * * 
* * * * 
* * * * * 
 #include <stdio.h>
int n,a,i,j;
int main() {printf("enter number of rows");
scanf("%d",&n);
for( i=1;i<=n;i++)
{ 
    for(j=1;j<=i;j++)
    {
        
       printf("* ");
       
    }printf("\n");
}
}*/
/*enter number of rows5
  1
  2  3
  4  5  6
  7  8  9 10
 11 12 13 14 15


  #include <stdio.h>
int n,a=1,i,j;
int main() {printf("enter number of rows");
scanf("%d",&n);
for( i=1;i<=n;i++)
{ 
    for(j=1;j<=i;j++)
    {
        
       printf("%3d",a);
       a++;
       
       
       
    }printf("\n");
}
}
*/
/*
enter number of rows5
  1
  1  2
  3  4  5
  6  7  8  9
 10 11 12 13 14

 #include <stdio.h>
int n,a=1,i,j;
int main() {printf("enter number of rows");
scanf("%d",&n);
for( i=1;i<=n;i++)
{ 
    for(j=1;j<=i;j++)
    {
        if(i==1&&j==1)
        {
            printf("%3d",a);
        }
        else
        {
         printf("%3d",a);
         a++;   
        }
    }printf("\n");
}
}
*/ 
/*enter number of rows5
1
32
654
10987
1514131211
#include <stdio.h>
int n,a=1,i,j,b;
int main() {printf("enter number of rows");
scanf("%d",&n);
for( i=1;i<=n;i++)
{ 
    b=a;
    for(j=1;j<=i;j++)
    {
        printf("%d",b--);
    }
    printf("\n");
    a+=i+1;
}
}

*/
