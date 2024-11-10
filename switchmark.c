#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,s6;
	int per;
	printf("enter the marks\n");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	per=((s1+s2+s3+s4+s5+s6)*100)/600;

	
/*	{ case 1:puts("topper");break;
		case 2:puts("grade a"); break;
			case 3:puts("grade b"); break;
			case 4:puts("grade c"); break;
				case 5:puts("grade d"); break;
					case 6:puts("grade e"); break;
						case 7:puts("grade f"); break;
							default:puts("fail");break;
		
		
*/	
switch(per/10) {//99/10=9 90/10=9
        case 9:
            puts("Grade A");
            break;
        case 8:
            puts("Grade B");
            break;
        case 7:
            puts("Grade C");
            break;
        case 6:
            puts("Grade D");
            break;
        
        case 5:
            puts("Grade E");
            break;
        default:
            puts("Grade F");
            break;
        }
	
}
