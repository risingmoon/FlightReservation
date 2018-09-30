#include "pch.h"
#include "Flight.h"
#include "Schedule.h"
#include "Passenger.h"
#include "Ticket.h"
#include <string>
#include <iostream>

int main()
{
	Flight flight("AA123");
	flight.display();

	Schedule schedule;
	schedule.addFlight(flight);
	schedule.display();

	Passenger passenger("Jane", "Doe");
	passenger.display();

	Ticket ticket(passenger, flight);
}