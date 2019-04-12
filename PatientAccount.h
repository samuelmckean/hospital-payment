#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

class PatientAccount
{
	private:
		double totalCharges;
		int daysSpent;
	public:
		PatientAccount(double, int);
		PatientAccount();
		~PatientAccount();

		void setTotalCharges(double);
		void setDaysSpent(int);
		double getTotalCharges() const;
		int getDaysSpent() const;
};
#endif


// Constructor 1
PatientAccount::PatientAccount(double charges, int days)
{
	totalCharges = charges;
	daysSpent = days;
}


// Default Constructor
PatientAccount::PatientAccount()
{
	totalCharges = 0.0;
	daysSpent = 0;
}


// Destructor
PatientAccount::~PatientAccount()
{
}


// Mutators
void PatientAccount::setTotalCharges(double charges)
{
	totalCharges = charges;
}

void PatientAccount::setDaysSpent(int days)
{
	daysSpent = days;
}


// Accessors
double PatientAccount::getTotalCharges() const
{
	return totalCharges;
}

int PatientAccount::getDaysSpent() const
{
	return daysSpent;
}