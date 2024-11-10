// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char s1[50],s2[50];
    int i,j;
    printf("Enter the first strings");
    scanf("%s",s1);
    printf("Enter the second strings");
    scanf("%s",s2);
    // apple
    
    // *a *e r o *p *l *a n *e
    // ron
    
    int l1,l2;
    for(l1=0;s1[l1]!='\0';l1++);
  for(l2=0;s2[l2]!='\0';l2++);
  for(i=0;i<l1;i++)
  {
      for(j=0;j<l2;j++)
      {
          if(s1[i]==s2[j])
          {
              s2[j]='*';
          }
      }
  }
  for(i=0;i<l2;i++)
  {
      if(s2[i]!='*')
      {
          printf("%c",s2[i]);
      }
  }
}
