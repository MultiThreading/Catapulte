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
    int note = 0;
	vector<Catapulte*> catSelect;
    for(int i=0; i<cat.size(); i++)
	{
        note += cat[i]->getNote();
        for(int j = 0; j <= note; j ++)
        {
            catSelect.push_back(cat[i]);
        }
    }
    int azar;
    vector<Catapulte*> catSecond;
    for(int i = 0; i < (cat.size() / 2); i++)
    {
        azar = rand() % catSelect.size();
        catSecond.push_back(catSelect[azar]);
    }


	//sort(cat.begin(),cat.end(), fctCompareNote);
	/*for(int i=0; i<catSelect.size(); i++)
	{
		catSelect[i]->afficherCatapulte();
	}*/
    cout << "taille cat" << cat.size() << endl;
	cout << "taille catSecond" << catSecond.size() << endl;
	cout << "taille catSelect" << catSelect.size() << endl;


	return 0;
}
