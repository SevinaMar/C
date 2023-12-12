#include <stdio.h>
#include <math.h>

int main ()
{
	int ari8mos, square, time;
		time=1;
		printf("Select integer %d:\n",time);
		scanf("%d", &ari8mos);	
	while (ari8mos>0){
		 square=pow(ari8mos,2);
		printf("%d squared is %d\n", ari8mos, square);	
		 time++;
		printf("\nSelect an integer %d:\n", time);
		scanf("%d", &ari8mos);
				
	} 
	if (ari8mos<0){
		printf("%d is a negative number.\n", ari8mos);
	}
	else {
		printf("You chose 0.\n");
	}
	
	printf ("\nYou selected %d numbers.", time);
	return 0;
}
