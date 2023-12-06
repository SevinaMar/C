#include <stdio.h>
#include <math.h>

int main ()

{	char name[30];
		printf("What is your name?\n");
		scanf("%s", name);
		
	float height, weight;
		printf("What is your weight and height?\n");
		scanf("%f %f", &weight, &height);
		
	float b_m_i=weight/pow(height,2);
		printf("Your BMI-a redandant and meaningless standard- is %.2f\n",b_m_i);
	
		if(b_m_i<=18.5)
			{printf("%s, you are kind and ellipovaris.",name);
	}
		else if(b_m_i>18.5 && b_m_i<=25)
			{printf("%s, you are thoughful and kanoniko varos.",name);
	}
		else if(b_m_i>25 && b_m_i<=30)
			{printf("%s, you are strong and ypervaros.",name);
	}
		else
			{printf("%s, you are radiant and paxysarkos.");
	}
	
	return 0;
}
