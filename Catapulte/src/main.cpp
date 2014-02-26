#include "Catapulte.h"
#include "fonction.h"


int main() {

	srand(time(NULL));
	vector<Catapulte*> cat;

	for(int i=0; i<nb; i++)
	{
		cat.push_back(new Catapulte());
	}

	sort(cat.begin(),cat.end(), fctComparePortee);
	calculNote(cat);

	/*sort(cat.begin(),cat.end(), fctCompareEnergie);
	calculNote(cat);
*/
	int totalNote = 0;
	for(int i=0; i<cat.size(); i++)
	{
		totalNote += cat[i]->getNote();
	}

	int azar;
	int sommeNote;
	int j = 0;
	vector<Catapulte*> catSelect;

	for(int i=0; i<(cat.size()/2); i++)
	{
		sommeNote = 0;
		azar = rand() % totalNote;
		j = 0;

		/*while(sommeNote < azar)
		{
			sommeNote += cat[j]->getNote();

			if(sommeNote < azar)
			{
				catSelect.push_back(cat[j]);
				cat[j]->setNote(0);
			}

			j++;
		}*/
	}

	sort(cat.begin(),cat.end(), fctCompareNote);
	for(int i=0; i<cat.size(); i++)
	{
		cat[i]->afficherCatapulte();
	}

	return 0;
}
