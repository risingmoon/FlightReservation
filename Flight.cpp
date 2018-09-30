#include "pch.h"
#include "Flight.h"
#include <string>

void Flight::setNumber(std::string flightNumber) {
	number = flightNumber;
}

std::string Flight::getNumber() {
	return number;
}