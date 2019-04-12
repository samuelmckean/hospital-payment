// Hospital_Payment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"
using namespace std;

// Function prototypes
int mainMenu();
void surgeryMenu(PatientAccount &, Surgery);
void pharmacyMenu(PatientAccount &, Pharmacy);
void checkOut(PatientAccount);


int main()
{
	PatientAccount patient;
	Surgery surgery;
	Pharmacy pharmacy;
	
	// While loop for user main menu
	bool menuLoop = true;
	while (menuLoop)
	{
		switch (mainMenu())
		{
			case 1:
				surgeryMenu(patient, surgery);
				break;
			case 2:
				pharmacyMenu(patient, pharmacy);
				break;
			case 3:
				checkOut(patient);
				break;
			case 4:
				cout << "Program has ended.\n";
				menuLoop = false;
				break;
			default:
				cout << "Invalid menu choice.\n";
		}
	}
}

// Displays user main menu
int mainMenu()
{
	int choice;
	cout << "1: Surgery\n";
	cout << "2: Medication\n";
	cout << "3: Check out\n";
	cout << "4: Exit\n";
	cin >> choice;
	return choice;
}

// Displays user surgery menu
void surgeryMenu(PatientAccount &patient, Surgery surgery)
{
	int choice;
	while (true)
	{
		cout << "1: Heart\n";
		cout << "2: Eye\n";
		cout << "3: Brain\n";
		cout << "4: Boob\n";
		cout << "5: Foot\n";
		cin >> choice;
		if (choice < 1 || choice > 5)
			cout << "Invalid input.\n";
		else
			break;
	}
	switch (choice)
	{
		case 1:
			patient.setTotalCharges(patient.getTotalCharges() + surgery.getHeart());
			break;
		case 2:
			patient.setTotalCharges(patient.getTotalCharges() + surgery.getEye());
			break;
		case 3:
			patient.setTotalCharges(patient.getTotalCharges() + surgery.getBrain());
			break;
		case 4:
			patient.setTotalCharges(patient.getTotalCharges() + surgery.getBoob());
			break;
		case 5:
			patient.setTotalCharges(patient.getTotalCharges() + surgery.getFoot());
			break;
	}
}

// Displays user pharmacy menu
void pharmacyMenu(PatientAccount &patient, Pharmacy phar)
{
	int choice;
	while (true)
	{
		cout << "1: Advil\n";
		cout << "2: Hydrocodone\n";
		cout << "3: Penicillin\n";
		cout << "4: Azithromycin\n";
		cout << "5: Vicodin\n";
		cin >> choice;
		if (choice < 1 || choice > 5)
			cout << "Invalid input.\n";
		else
			break;
	}
	switch (choice)
	{
	case 1:
		patient.setTotalCharges(patient.getTotalCharges() + phar.getAdvil());
		break;
	case 2:
		patient.setTotalCharges(patient.getTotalCharges() + phar.getHydrocodone());
		break;
	case 3:
		patient.setTotalCharges(patient.getTotalCharges() + phar.getPenicillin());
		break;
	case 4:
		patient.setTotalCharges(patient.getTotalCharges() + phar.getAzithromycin());
		break;
	case 5:
		patient.setTotalCharges(patient.getTotalCharges() + phar.getVicodin());
		break;
	}
}

// Prints out daysSpent and totalCharges. Deletes patient object
void checkOut(PatientAccount patient)
{
	cout << "Days spent: " << patient.getDaysSpent() << endl;
	cout << "Total charges: $" << fixed << showpoint 
		 << setprecision(2) << patient.getTotalCharges() << endl << endl;
}