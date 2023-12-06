#include<stdio.h>
#include <math.h>
int main ()
{
	int i, num=0, p=0;
	printf("Insert an 16 digit binary number:  \n(press enter after each digit)\n");
	int array[16];
	
	for(i=0; i<16; i++)
		{	scanf("%d", &array[i]);
				if(i==7) {
				printf("8 more: \n");}
				if (i==12){
					printf("3 more:\n");}
		}
	printf("You selected ");
	for(i=0;i<16;i++)
		{printf("%d",array[i]);
		}
	
	for(i=15;i>0;i--)
		{ num= num+array[i]*pow(2,p);
				p++;
				}
	printf("\nThis number in decimel is %d.", num);
	
		
	return 0;	
}
