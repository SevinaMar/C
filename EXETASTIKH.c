#include <stdio.h>
#define HIGHSCORE 90

int find_highscore(int array[], int size);

int main()
{	int basket[10], i=0, va8mologia=0, highscore_games=0, success;
	float mo;
	
	for(i=0;i<10;i++)
		{printf("Enter the score the team achieved in game %d: ", i+1);
			scanf("%d", &basket[i]);
		}
	
	for(i=0;i<10;i++)
		{ va8mologia=va8mologia+basket[i];
			}	
		mo=va8mologia/10.0;
	printf("The team achieved an average score of %.2f points.\n", mo);
	i=0;
	while(i<10)
		{	if(basket[i]>mo)
				{highscore_games++;
				}
		i++;	}	
	printf("There were %d games where the team scored a higher than average score.\n", highscore_games);
	success= find_highscore(basket, 10);
	printf("In %d games they achieved a score over 90 points.", success);
	
	return 0;
}

int find_highscore(int array[], int size)
{	int i=0, games=0;
	
	while(i<size)
		{if (array[i]>HIGHSCORE)
			{games++;
			} i++;
		}
	return games;
}


