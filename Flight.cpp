#include "pch.h"
#include "Flight.h"
#include <iostream>
#include <string>

using namespace std;

Flight::Flight(
	string flightAirline,
	string flightNumber,
	string flightDepartureTime,
	string flightArrivalTime,
	string flightDepartureDate,
	string flightArrivalDate,
	string flightOrigin,
	string flightDestination)
	:airline(flightAirline),
	number(flightNumber),
	departureTime(flightDepartureTime),
	arrivalTime(flightArrivalTime),
	departureDate(flightDepartureDate),
	arrivalDate(flightArrivalDate),
	origin(flightOrigin),
	destination(flightDestination) {}

void Flight::display() {
	cout << "Flight Information" << endl;
	cout << string(40, '-') << endl;
	cout << "Airline: " << getAirline() << endl;
	cout << " Number: " << getNumber() << endl;
	cout << "   Time: " << getDepartureTime() << "-" << getArrivalTime() << endl;
	cout << "   Date: " << getDepartureDate() << "-" << getArrivalDate() << endl;
	cout << "  Route: " << getOrigin() << "-" << getDestination() << endl;
	cout << endl;
}

string Flight::getAirline() {
	return airline;
}

string Flight::getNumber() {
	return number;
}

string Flight::getDepartureTime() {
	return departureTime;
}

string Flight::getArrivalTime() {
	return arrivalTime;
}

string Flight::getDepartureDate() {
	return departureDate;
}

string Flight::getArrivalDate() {
	return arrivalDate;
}

string Flight::getOrigin() {
	return origin;
}

string Flight::getDestination() {
	return destination;
}