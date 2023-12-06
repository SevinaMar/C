#include <stdio.h>
#include <string.h>
int main ()
{
	char onoma[40],best_student[40];
	float va8mos, best_va8mos=0, synolikh_va8mologia, va8mos_=0, pososto, mesos_oros;// <<8ELW NA VALLW PERIORISMO STO VA8MO 0>=X=<20!!!<<<<
	int ma8htes=0, ma8htes_;
	
	while (onoma!='0')//TI PERIORISMO MPORW NA VALLW GIA NA STAMATA H LOOPA????<<< " " 'H "TELOS"
		{ 	if (ma8htes>1)
					
				{pososto=ma8htes_*100/ma8htes;
					mesos_oros=synolikh_va8mologia/ma8htes;
			
				 
		if(va8mos<10)
				{++ma8htes_;
				}			
					
			va8mos_=va8mos;	/*<<<<<<<<<<<<PROVLHMA ME KALYTERO VA8MO AN MPEI KATW APO TH VASH
										KSEKINA PALI SYGKTISH MALLON, ALLA EIMAI KOYRASMENH TWRA*/
				} 
			do{	printf("\n\nEnter student's name and record:\n");
				scanf("%s %f", onoma, &va8mos);
			}while(va8mos<1||va8mos<20);
				++ma8htes;
			 	 	
		}
			if(va8mos>va8mos_)
				{	best_va8mos=va8mos;
					best_student[20]=onoma[20];//<<<<<<<<<<<DEN EMFANIZETAI TO ONOMA TOY KALYTEROY<<<<<<<
				}
			synolikh_va8mologia=synolikh_va8mologia+(float)va8mos;
					
	printf ("\nThe class average is %.2f\n", mesos_oros);
	printf("The best student is %s with %.2f.\nThere are %d students in this class with failining percentage of %.1f .", best_student, best_va8mos, ma8htes, pososto);
	
	return 0;
}
