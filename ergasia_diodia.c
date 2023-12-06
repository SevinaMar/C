#include <stdio.h>
int main ()
{
	char oxhma;
	int times=1,f=0;
	float sum=0;
	 
	 for(times=0; times<100; times++)
	 {	
	 	printf ("\nWhat is the type of your vehicle? \nEnter T for Truck,C for Car or M for Motorcycle:\n");
	 	 	scanf (" %c", &oxhma);
	 		 
			 if (oxhma == 't' || oxhma == 'T' || oxhma == 'c' || oxhma == 'C' || oxhma == 'm' || oxhma == 'M')	{
				switch(oxhma)
			 		{ 	case 'T':
			 			case 't':
			 			printf("Nice truck, you have to pay 4.80 euros.\n");
			 			sum=sum+4.80;
			 			break;
			 			case 'C':
			 			case 'c':
			 			printf("Nice car, you have to pay 1.90 euros.\n");
			 			sum=sum+1.90;
			 			break;
			 			case 'M':
			 			case 'm':
			 			printf("Nice motorcycle, you have to pay 1.30 euros.\n");
			 			sum=sum+1.30;
			 			break;	
				 	}	}  
			else {f++;
			printf("Please enter T, C or M:\n");
			 					scanf(" %c",&oxhma);
						 }		
	}
			printf("\nThat's all for today.\n%d vehicles have passed.\n You collected %.2f euros.",times, sum);
		return 0;
	 }
	
