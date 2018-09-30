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

	Schedule schedule;
	schedule.addFlight(
		"American", "AA123",
		"7:00 AM", "12:00 PM",
		"12/01/2018", "12/01/2018",
		"SEA", "HOU");
	schedule.addFlight(
		"United", "UA246",
		"8:00 AM", "11:00 AM",
		"12/01/2018", "12/01/2018",
		"SEA", "CHI");

	Ticket ticket(passenger, schedule[0]);

	// TODO: Reserve a Seat

	// Flight Schedule
	schedule.display();

	// Flight Details
	schedule[1].display();

	// Display Passenger Information
	passenger.display();

	// Display User Ticket Information
	ticket.display();

	// TODO: Exit Program
}