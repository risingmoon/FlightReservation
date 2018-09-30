#include "pch.h"
#include "Flight.h"
#include <iostream>
#include <string>

using namespace std;

Flight::Flight(string flightNumber)
	:number(flightNumber) {}

void Flight::display() {
	cout << "Flight Number: " << getNumber() << endl;
	cout << endl;
}
void Flight::setNumber(string flightNumber) {
	number = flightNumber;
}

string Flight::getNumber() {
	return number;
}