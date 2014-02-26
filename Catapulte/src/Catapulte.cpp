#include "Catapulte.h"
#include "fonction.h"

Catapulte::Catapulte() {
	this->angleAlpha = (rand() % 90) *PI/180;
	this->Lb = rand() % 100 + 1;
	this->Mb = rand() % 100 + 1;
	this->angleBeta = (rand() % 90) *PI/180;
	this->Mc = rand() % 500 + 1;
	this->Mp = rand() % 100 + 1;
	this->Lr = rand() % 200 + 1;
	this->note = 0;
}

float Catapulte::getForceTractionF(){
	return (((this->Mc * g) * sin(this->angleBeta)) - ((this->Mp * g) * cos(this->angleAlpha)));
}

float Catapulte::getMomentBrasM(){
	return (this->getForceTractionF() * this->Lb);
}

float Catapulte::getMomentInertieI(){
	return ((this->Mb * pow(this->Lb,2)) / 3);
}
float Catapulte::getAccAngulaireUni(){
	return (this->getMomentBrasM() / this->getMomentInertieI());
}
float Catapulte::getVelociteV(){
	return (this->getAccAngulaireUni() * this->Lb);
}
float Catapulte::getPorteeP(){
	return ((pow(this->getVelociteV(),2) / g) * sin( 2* (PI/2 - this->angleAlpha)));
}
float Catapulte::getEnergieImpact(){
	return (0.5 * this->Mp * pow(this->getVelociteV(),2));
}
bool Catapulte::isViable(){
	if(((pow((sin(this->angleAlpha) * this->Lb), 2)
			+ pow((cos(this->angleAlpha) * this->Lb - this->Lr),2))
			* sin(this->angleAlpha) * (this->Mp*g))
			<= (this->Lr *(this->Mc * g))){
		return true;
	}else{
		return false;
	}
}

void Catapulte::afficherCatapulte(){
	cout << "alpha =" << this->getAngleAlpha()*180/PI
		<< " : Lb = " << this->getLb()
		<< " : Mb = " << this->getMb()
		<< " : beta = " << this->getAngleBeta()*180/PI
		<< " : Mc = " << this->getMc()
		<< " : Mp = " << this->getMp()
		<< " : Lr = " << this->getLr()
		<< " Viable = " << this->isViable()
		<< " : Portee = " << this->getPorteeP()
		<< " : Energie impact = " << this->getEnergieImpact()
		<< " : Note = " << this->getNote()
		<< endl;
}
