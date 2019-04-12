#ifndef PHARMACY_H
#define PHARMACY_H


class Pharmacy
{
	private:
		double advil;
		double hydrocodone;
		double penicillin;
		double azithromycin;
		double vicodin;
	public:
		Pharmacy();
		~Pharmacy();

		// Accessors
		double getAdvil() const;
		double getHydrocodone() const;
		double getPenicillin() const;
		double getAzithromycin() const;
		double getVicodin() const;
};
#endif


Pharmacy::Pharmacy()
{
	advil = 10.50;
	hydrocodone = 125.12;
	penicillin = 74.23;
	azithromycin = 93.48;
	vicodin = 68.39;
}


Pharmacy::~Pharmacy()
{
}


// Accessors
double Pharmacy::getAdvil() const
{
	return advil;
}

double Pharmacy::getHydrocodone() const
{
	return hydrocodone;
}

double Pharmacy::getPenicillin() const
{
	return penicillin;
}

double Pharmacy::getAzithromycin() const
{
	return azithromycin;
}

double Pharmacy::getVicodin() const
{
	return vicodin;
}