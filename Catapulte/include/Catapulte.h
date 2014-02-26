#ifndef CATAPULTE_H_
#define CATAPULTE_H_

class Catapulte {
private:
	float angleAlpha;	// hauteur de la butée
	float Lb; 			// longueur du bras
	float Mb;			// masse du bras
	float angleBeta;	// angle de la force de traction
	float Mc;			// masse du contrepoids
	float Mp;			// masse du projectile
	float Lr;			// longueur de la base
	int note;			// note

public:
	Catapulte();
	float getForceTractionF();
	float getMomentBrasM();
	float getMomentInertieI();
	float getAccAngulaireUni();
	float getVelociteV();
	float getPorteeP();
	float getEnergieImpact();
	bool isViable();

	void afficherCatapulte();

	float getAngleAlpha() const {
		return angleAlpha;
	}

	void setAngleAlpha(float angleAlpha) {
		this->angleAlpha = angleAlpha;
	}

	float getAngleBeta() const {
		return angleBeta;
	}

	void setAngleBeta(float angleBeta) {
		this->angleBeta = angleBeta;
	}

	float getLb() const {
		return Lb;
	}

	void setLb(float lb) {
		Lb = lb;
	}

	float getLr() const {
		return Lr;
	}

	void setLr(float lr) {
		Lr = lr;
	}

	float getMb() const {
		return Mb;
	}

	void setMb(float mb) {
		Mb = mb;
	}

	float getMc() const {
		return Mc;
	}

	void setMc(float mc) {
		Mc = mc;
	}

	float getMp() const {
		return Mp;
	}

	void setMp(float mp) {
		Mp = mp;
	}

	int getNote() const {
		return note;
	}

	void setNote(int note) {
		this->note = note;
	}
};

#endif /* CATAPULTE_H_ */
