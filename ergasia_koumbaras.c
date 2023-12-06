#include <stdio.h>
int main ()
{
	int week=1;
	int money=30;
	char answer;

	do {
	printf("Let's see how long will it take to achieve your goal of collecting 600 euros to buy a new computer.\nAre you ready? (y/n)\n");
	scanf("%c", &answer);
		
	if (answer == 'n' || answer == 'N')
		{
			printf ("\nOk then...\n What about now?\n");
				scanf(" %c", &answer);
		}
	
	else  {	printf("Excuse me?\n");
				scanf(" %c", &answer);
			}
} while (!(answer == 'y' || answer == 'Y'));
	
	
if(answer == 'y' || answer == 'Y')
	{		while(money<600)
			{
				printf ("It's week %d and you have %d euros\n", week, money);
				money=money*2;
				week++;
			
			}
			if (money>=600)
			{	int ypoloipo=money-600;
				printf ("Congratulations! It's week %d and you have %d euros.\n It took you %d weeks and you have a surplus of %d euros.", week, money,week, ypoloipo);
		
			}}
				
	return 0;  //H8ELA NA VALLW LOOP MEXRI NA APANTHSEI KATAFATIKA O XRHSTHS<<<<<<<<
}
