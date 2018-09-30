#include "pch.h"
#include "Schedule.h"
#include "Flight.h"
#include <iostream>

using namespace std;

void Schedule::addFlight(Flight& flight) {
	flights.push_back(flight);
}

void Schedule::display() {
	cout << "SCHEDULE" << endl;
	cout << endl;
	cout << "FLIGHT" << endl;
	cout << string(6, '-') << endl;

	for (Flight flight : flights) {
		cout << flight.getNumber() << endl;
	}
}
