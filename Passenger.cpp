#include "pch.h"
#include "Passenger.h"
#include <iostream>

using namespace std;

Passenger::Passenger(string fName, string lName)
	: firstName(fName), lastName(lName) {}


void Passenger::display() {
	cout << "Passenger Information" << endl;
	cout << string(21, '-') << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << endl;
}
void Passenger::setFirstName(string fName) {
	firstName = fName;
}

string Passenger::getFirstName() {
	return firstName;
}

void Passenger::setLastName(string lName) {
	lastName = lName;
}

string Passenger::getLastName() {
	return lastName;
}
