#include "pch.h"
#include "Flight.h"
#include "Schedule.h"
#include "Passenger.h"
#include "Ticket.h"
#include <string>
#include <iostream>

int main()
{
	// TODO: Reserve a Seat
	Passenger passenger("Jane", "Doe");

	Flight flight(
		"American", "AA123",
		"7:00 AM", "12:00 PM",
		"12/01/2018", "12/01/2018",
		"Seattle", "Houston");

	Schedule schedule;
	schedule.addFlight(flight);

	// Flight Schedule
	schedule.display();

	// Flight Details
	flight.display();

	// Display Passenger Information
	passenger.display();

	Ticket ticket(passenger, flight);

	// TODO: Display User Ticket Information
	// TODO: Exit Program
}