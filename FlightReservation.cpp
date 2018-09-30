#include "pch.h"
#include "Flight.h"
#include "Schedule.h"
#include "Passenger.h"
#include "Ticket.h"
#include <string>
#include <iostream>

int main()
{

	Passenger passenger("Jane", "Doe");

	Flight flight(
		"American", "AA123",
		"7:00 AM", "12:00 PM",
		"12/01/2018", "12/01/2018",
		"SEA", "HOU");

	Schedule schedule;
	schedule.addFlight(flight);

	Ticket ticket(passenger, flight);

	// TODO: Reserve a Seat

	// Flight Schedule
	schedule.display();

	// Flight Details
	flight.display();

	// Display Passenger Information
	passenger.display();

	// Display User Ticket Information
	ticket.display();

	// TODO: Exit Program
}