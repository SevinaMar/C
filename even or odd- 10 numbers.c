#include <stdio.h>
int main ()
{
	int akeraio,i,monoi=0, zygoi=0, zero=0;
	
	for(i=1; i<=10; i++){
		printf("Select a number:\n");
		scanf("%d", &akeraio);
			if(akeraio==0)
			zero++;
			else			
				{
				if(akeraio%2==0)
				zygoi++;
				else if(akeraio%2==1)
				monoi++;}
				

	}
 	printf("\nYou selected %d even numbers and %d odd numbers. You selected zero %d times", zygoi, monoi, zero);
		return 0;
}
