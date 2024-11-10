#include <stdio.h>

int main() {
    int a,age,prb,tyre;
    printf("Enter vehicle type\n");
    scanf(" %d",&a);
    if(a==2 || a==3 ||a==4){
       printf("what is the age of vechile\n");
       scanf("%d",&age);
       if (age>=8){
           printf("enter 1 for tyre problem\n");
            printf("enter 2 for fuel problem\n");
             printf("enter 3 for engine problem\n");
              printf("enter 4 for general problem\n");
              scanf("%d",&prb);
               if(prb==1)
			   {
			   printf("how many tyres you are facing issue\n");
              scanf("%d",&tyre);
			  printf("tyre price%d\n",tyre*400);
              }
              else if(prb==2)
			  {
                  printf("for fuel problem cost is rs.1500\n");
			  }
                  else if(prb==3)
				  {
                      printf("for engine cost is rs.5000\n");
					  }
                      else if(prb==4)
					  {
                          printf("for general servicing cost is rs.1000\n"); 
						  }
           
       }else printf("your vechile service will done after a while\n");
    }
    else printf("this service center is not accepting other than 2 wheeler,3 wheeler & 4 wheeler\n");
}
