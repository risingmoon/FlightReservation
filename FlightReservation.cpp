#include "pch.h"
#include "Flight.h"
#include "Schedule.h"
#include <string>
#include <iostream>

int main()
{
	Flight flight1("AA123");

	Flight flight2;
	flight2.setNumber("UA123");

	Schedule schedule;
	schedule.addFlight(flight1);
	schedule.addFlight(flight2);
	schedule.display();
}