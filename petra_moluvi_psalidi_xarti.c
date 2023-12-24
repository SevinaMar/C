#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 		srand(time(NULL));
	int paiktis, ai;
	printf("Choose 1.petra, 2.moluvi, 3.psalidi or 4.xarti\n");
	scanf ("%d", &paiktis);
	
	switch (paiktis)
	{	case 1:
		printf("petra");
		break;
		case 2 :
		printf("moluvi");
		break;
		case 3:
		printf("psalidi");
		break;
		case 4:
		printf("xarti");
		break;
	}
	
	ai=rand()%5;
		
	switch (ai)
	{	case 1:
		printf("\nvs petra");
		break;
		case 2 :
		printf( "\nvs moluvi");
		break;
		case 3:
		printf("\nvs psalidi");
		break;
		case 4:
		printf("\nvs xarti");
		break;
	}
	
	if (paiktis==1)
		{if (ai==4)
		printf("\n\nYou loose.");
		else if(ai==2||ai==3)
		printf("\n\nYou win!");
		else
		printf("\n\nIt's a tie!");
		}
	else if(paiktis==2)
		{if (ai==4)
		printf("\n\nYou win!");
		else if(ai==1||ai==3)
		printf("\n\nYou loose.");
		else
		printf("\n\nIt's a tie!");
		}	
	else if(paiktis==3)
		{if (ai==1)
		printf("\n\nYou loose.");
		else if(ai==2||ai==4)
		printf("\n\nYou win!");
		else
		printf("\n\nIt's a tie!");
		}	
	else if(paiktis==4)
		{if (ai==1)
		printf("\n\nYou win!");
		else if(ai==2||ai==3)
		printf("\n\nYou loose.");
		else
		printf("\n\nIt's a tie!");
		}	
	else
		printf("Invalid iput");
			
	
	return 0;
}
