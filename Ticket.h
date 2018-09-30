#pragma once
#include "Passenger.h"
#include "Flight.h"

class Ticket
{
public:
	Ticket(Passenger& ticketPassenger, Flight& ticketFlight);
		
private:
	Passenger& passenger;
	Flight& flight;
};

