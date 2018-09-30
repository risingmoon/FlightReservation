#include "pch.h"
#include "Passenger.h"

Passenger::Passenger(string fName, string lName)
	: firstName(fName), lastName(lName) {}

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
