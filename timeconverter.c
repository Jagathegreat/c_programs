#include<stdio.h>
int main()
{
    int hr=0,min=0,sec;
    scanf("%d",&sec);
    hr=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    printf("hr=%d,min=%d,sec=%d",hr,min,sec);

    

}
