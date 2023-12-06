#include <stdio.h>

int main ()
{
int dwrea, portofoli=0, people=0;
int min=100000, max=0;
	do
	{
		printf("What could you offer us today?  ");
		scanf("%d", &dwrea);
		portofoli=portofoli+dwrea;
		people++;
		
		if(dwrea<min)
		min=dwrea;
		if(dwrea>max)
		max=dwrea;
		
	}while(portofoli<1000);
	
	float mo=(float)portofoli/people; 
	printf("You collected %d euros from %d people.\nThe maximum donation was %d and the minimum %d. The average donation was %.2f.", portofoli,people, max, min, mo);
	
	return 0;
}
