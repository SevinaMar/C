#include <stdio.h>
int main()
{	
	int num, guess=0, i=1;
	
	printf("User one select a secret number from 1 to 100:\n");
	scanf("%d", &num);
	
	
	printf ("\n\nNow it's time for User two. Can you guess the number? I will help. Just choose a number:\n");
	
	while (guess!=num)
{	scanf ("%d", &guess);
			if(guess>num)
			{printf("You have to go lower.\n");
			i++;
			}
			
			else 
			{printf("You have to go higher.\n");
			i++;
			}

}
	printf("Congratulations! It took you %d guesses.", i);
	return 0;
	
}
