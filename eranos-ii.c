#include <stdio.h>

int main ()
{
	int dwrea, portofoli=0, people=0;
	int min=1000000, max=0;    //TERASTIO MIN-----MHDENIKO MAX<<<<<<
	
	while (portofoli<1000)
			{printf("What could you offer us today?");
			scanf("%d", &dwrea);
			portofoli=portofoli+dwrea;
			people++;
			
			if(dwrea<min)//XIASTH<<<<<
			{ min=dwrea;  //x	}
			if(dwrea>max)//XIASTH<<<<<
			{max=dwrea;  //x	}
					
			}
	float mo=(float)portofoli/people; //E3W APO TH LOOPA!!!<<<<<<<<
	printf("You collected %d euros from %d people.\nThe maximum donation was %d and the minimum %d. The average donation was %.2f.", portofoli,people, max, min, mo);
	
return 0;
}
