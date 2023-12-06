#include <stdio.h>
int main ()
{
	int grade;
	
	do
	{	printf("Grade your student.\n");
		scanf("%d", &grade);
	}while(grade<1||grade>20);
return 0;
}
