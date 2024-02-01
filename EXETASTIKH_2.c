#include <stdio.h>

int main ()
{	int i=0, omikron=0, size=0, omikron_p=0;
		char seira[]={"TEXNIKOS EFARMOGON PLHROFORIKHS"};
	
while (seira[i]!='\0')
	{size++;
	i++;
	}
			
	for(i=0; i<size; i++)
		{ if(seira[i]=='O')
			{omikron++;		
			}	
		}
	printf("There are %d o's in your entry.\n ", omikron);
	
	char *point=seira; //EDW HTAN TO LATHOS<<<
	
	
	while(*point!='\0')
		{ 	if(*point=='O')
			omikron_p++;
			point++; //KI EDW<<<
		}
	printf("I calculated %d o's using pointers.", omikron_p);
	return 0;
}
