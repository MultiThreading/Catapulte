#include "fonction.h"

bool fctComparePortee (Catapulte * s1, Catapulte * s2)
{
   return (abs(s1->getPorteeP() - portee) < abs(s2->getPorteeP() - portee) ? true : false);
}

bool fctCompareEnergie (Catapulte * s1, Catapulte * s2)
{
   return (s1->getEnergieImpact() > s2->getEnergieImpact() ? true : false);
}

bool fctCompareNote (Catapulte * s1, Catapulte * s2)
{
   return (s1->getNote() > s2->getNote() ? true : false);
}

void calculNote(vector<Catapulte*> cat)
{
	int maxNote = 100;

	for(int i=0; i<cat.size(); i++)
	{
		cat[i]->setNote(cat[i]->getNote() + maxNote);

		if(maxNote > 1){
			maxNote--;
		}
	}
}
