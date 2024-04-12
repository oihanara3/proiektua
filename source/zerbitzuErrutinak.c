/*-------------------------------------
periferikoak.c
-------------------------------------*/

#include <nds.h>
#include <stdio.h>
#include "definizioak.h"
#include "periferikoak.h"
#include "fondoak.h"
#include "spriteak.h"

int EGOERA; // Automata zein egoeratan dagoen adierazteko erabilia
int seg3;   // Hiru segundo pasatzen ote diren ikusten joateko

void tekEten ()
{
if (EGOERA == ITXITA)
{	
	if (SakatutakoTekla()==A)
	{
		EGOERA=IREKITA;
		iprintf("\x1b[13;5HPasa diren segunduak=0");
		erakutsiFondoBi();
		seg3=0;
		ErakutsiErronboa(1, 5, 5);
		ErakutsiErronboHandia(2, 100, 100);
	}
}
}

void tenpEten()
{
	static int tik=0;
	static int seg=0;
	

if (EGOERA!=ZAI)
{
	tik++; 
	if (tik==5)
	{
		seg++;
		iprintf("\x1b[13;5HPasa diren segunduak=%d", seg);
		tik=0;
		if (EGOERA == IREKITA)
		{
			seg3++;
			if (seg3==3)
			{
				erakutsiFondoBat();
				seg3=0;
				EGOERA=ITXITA;
				EzabatuErronboa(1, 5, 5);
				EzabatuErronboHandia(2, 100, 100);
			}
		}
				
	}
}
	
}

void etenZerbErrutEzarri()
{
// HAU BETE
	
}

