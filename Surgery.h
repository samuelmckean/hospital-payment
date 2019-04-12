#ifndef SURGERY_H
#define SURGERY_H

class Surgery
{
	private:
		double heart;
		double eye;
		double brain;
		double boob;
		double foot;
	public:
		Surgery();
		~Surgery();

		// Accessors
		double getHeart() const;
		double getEye() const;
		double getBrain() const;
		double getBoob() const;
		double getFoot() const;
};
#endif


Surgery::Surgery()
{
	heart = 15000;
	eye = 7393.23;
	brain = 27523;
	boob = 9343.23;
	foot = 2353.23;
}


Surgery::~Surgery()
{
}


// Accessors
double Surgery::getHeart() const
{
	return heart;
}

double Surgery::getEye() const
{
	return eye;
}

double Surgery::getBrain() const
{
	return brain;
}

double Surgery::getBoob() const
{
	return boob;
}

double Surgery::getFoot() const
{
	return foot;
}