#include<stdio.h>
#include<stdbool.h>


	bool isevenodd(int n)
	{int a; 
     a=n%2;
     return a;
     
	}
	int main()
	{ int n;
	 bool e;
		printf("enter a number");
		scanf("%d",&n);
		e=isevenodd(n);
		(e==0)?printf("even no"):printf("odd no");
    }
