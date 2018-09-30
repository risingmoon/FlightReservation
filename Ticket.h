#pragma once
#include "Passenger.h"
#include "Flight.h"

class Ticket
{
public:
	Ticket(Passenger& ticketPassenger, Flight& ticketFlight);

	Passenger& getPassenger();
	Flight& getFlight();
	void display();

private:
	Passenger& passenger;
	Flight& flight;
};

