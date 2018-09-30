#pragma once
#include "Passenger.h"
#include "Flight.h"

class Ticket
{
public:
	Ticket() = default;
	//Ticket(Passenger& ticketPassenger, Flight& ticketFlight);

	//Getters and Setters
	void setPassenger(Passenger *ticketPassenger);
	Passenger& getPassenger();

	void setFlight(Flight *flight);
	Flight& getFlight();

	void display();

private:
	Passenger *passenger = nullptr;
	Flight *flight = nullptr;
};

