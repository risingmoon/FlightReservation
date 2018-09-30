#include "pch.h"
#include "Flight.h"
#include <iostream>
#include <string>

using namespace std;

void Flight::display() {
	cout << "Flight Number: " << getNumber() << endl;
}
void Flight::setNumber(string flightNumber) {
	number = flightNumber;
}

string Flight::getNumber() {
	return number;
}