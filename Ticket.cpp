#include "pch.h"
#include "Ticket.h"
#include "Passenger.h"
#include "Flight.h"

Ticket::Ticket(Passenger& ticketPassenger, Flight& ticketFlight)
	:passenger(ticketPassenger), flight(ticketFlight) {}