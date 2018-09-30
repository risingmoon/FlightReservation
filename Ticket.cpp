#include "pch.h"
#include "Ticket.h"
#include "Passenger.h"
#include "Flight.h"
#include <iostream>

using namespace std;

Ticket::Ticket(Passenger& ticketPassenger, Flight& ticketFlight)
	:passenger(ticketPassenger), flight(ticketFlight) {}

Passenger& Ticket::getPassenger() {
	return passenger;
}

Flight& Ticket::getFlight() {
	return flight;
}

void Ticket::display() {
	cout << "Ticket Information" << endl;
	cout << string(40, '-') << endl;
	cout << "First Name: " << passenger.getFirstName() << endl;
	cout << " Last Name: " << passenger.getLastName() << endl;
	cout << endl;
	cout << "   Airline: " << flight.getAirline() << endl;
	cout << "    Number: " << flight.getNumber() << endl;
	cout << "      Time: " << flight.getDepartureTime() << " - " << flight.getArrivalTime() << endl;
	cout << "      Date: " << flight.getDepartureDate() << " - " << flight.getArrivalDate() << endl;
	cout << "     Route: " << flight.getOrigin() << " - " << flight.getDestination() << endl;
	cout << endl;
}