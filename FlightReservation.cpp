#include "pch.h"
#include "Flight.h"
#include "Schedule.h"
#include "Passenger.h"
#include "Ticket.h"
#include <string>
#include <iostream>

int main()
{
	Flight flight(
		"American", "AA123",
		"7:00 AM", "12:00 PM",
		"12/01/2018", "12/01/2018",
		"Seattle", "Houston");

	// Flight Details
	flight.display();

	Schedule schedule;
	schedule.addFlight(flight);

	// Flight Schedule
	schedule.display();

	Passenger passenger("Jane", "Doe");

	// Display Passenger Information
	passenger.display();

	Ticket ticket(passenger, flight);
}