#include <stdio.h>
int main ()
{
	int num_2[16]={0};
	int num_10, help=0, i;
	
	printf("Insert a decimal number:  ");
	scanf("%d", &num_10);
	
	help=num_10;
	while(help>0)
		{ for(i=15;i>0;i--)	
			{ num_2[i]=help%2;
			  help=help/2;
			}
		}
		printf("The binary is ");
	 for(i=0;i<16;i++)
	{printf("%d",num_2[i]);}
	
	return 0;
	
}

