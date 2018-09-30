#include "pch.h"
#include "Schedule.h"
#include "Flight.h"
#include <iomanip>
#include <iostream>

using namespace std;

void Schedule::addFlight(Flight& flight) {
	flights.push_back(flight);
}

void Schedule::display() {
	cout << " ___________________________________________________________________________________ " << endl;
	cout << "| # | Airline  | Number |        Time         |          Date           |    Route  |" << endl;
	cout << "|---|----------|--------|---------------------|-------------------------|-----------|" << endl;

	for (size_t i = 0; i != flights.size(); ++i) {
		cout << "| " << left << setw(2) << i + 1
			 << "| " << setw(9) << flights[i].getAirline()
			 << "| " << setw(7) << flights[i].getNumber()
			 << "| " << setw(20) << (flights[i].getDepartureTime() + " - " + flights[i].getArrivalTime())
			 << "| " << setw(24) << (flights[i].getDepartureDate() + " - " + flights[i].getArrivalDate())
			 << "| " << setw(10) << (flights[i].getOrigin()  + " - " + flights[i].getDestination())
			 << "|" << endl;
	}
	cout << "|___|__________|________|_____________________|_________________________|___________|" << endl;
	cout << endl;
}
